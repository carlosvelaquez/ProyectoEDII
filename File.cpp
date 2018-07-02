#include "File.h"

//Funciones de apoyo

void File::calculateSizes(){
  //Calcular el tamaño en bytes de los registros
  recordSize = 0;

  for (int i = 1; i <= fields.size; i++) {
    //Suma los tamaños de todos los campos
    recordSize += fields[i].getSize();
  }

  /*Suma la cantidad de campos, ya que la cantidad de comas más un salto de línea
  equivalen a la cantidad de campos que hay.*/
  recordSize += fields.size;
  recordSize ++;
 //qDebug() << "Record size: " << recordSize;


  //Calcular el tamaño en bytes abarcado por el meta
  file.clear();
  file.seekg(0, ios::beg); //Busca la primera posición de la línea donde comienza la info de los campos

  string in = "";
  metaSize = 0;

  //file.ignore(numeric_limits<streamsize>::max(), '\n');
  getline(file, in, '\n');
  metaSize += in.length();
  getline(file, in, '\n');
  metaSize += in.length();

  //El tamaño del meta sería todo lo que ha recorrido hasta que termina la info de campos más un salto de línea
  //metaSize = file.tellg();
  metaSize += 4;

  /*file.ignore(numeric_limits<streamsize>::max(), '\n');
  file.ignore(numeric_limits<streamsize>::max(), '\n');
  metaSize = file.tellg();
  metaSize -= 3;*/

 //qDebug() << "Meta size: " << metaSize;
}

int File::position(int index){
  index --;
  return (recordSize*index) + metaSize;
}

long File::filesize(){
  ifstream inFile(path, ios::binary | ios::ate);

  if (inFile) {
    long ret = inFile.tellg();
   //qDebug() << "Filesize: " << ret;
    inFile.close();

    return ret;
  }

  return -1;
}


//Constructores

File::File(){
  path = "";
  lastDeleted = -1;
  recordSize = -1;
  metaSize = -1;
  blockSize = 10;
  currentBlock = -1;

  locked = false;

  inBuffer = List<List<string>>(blockSize);
  outBuffer = List<List<string>>(blockSize);
  index = BTree(3);
}

File::File(string nPath){
  path = nPath;
  lastDeleted = -1;
  recordSize = -1;
  metaSize = -1;
  blockSize = 10;
  currentBlock = -1;

  locked = false;

  inBuffer = List<List<string>>(blockSize);
  outBuffer = List<List<string>>(blockSize);
  index = BTree(3);

  readMeta();
}

File::File(string nPath, int nBlockSize){
  path = nPath;
  lastDeleted = -1;
  recordSize = -1;
  metaSize = -1;
  blockSize = nBlockSize;
  currentBlock = -1;

  locked = false;

  inBuffer = List<List<string>>(blockSize);
  outBuffer = List<List<string>>(blockSize);
  index = BTree(3);

  readMeta();
}

List<Field> File::getFields(){
  return fields;
}

List<Field>* File::getLocationFields(){
  return &fields;
}

//Funciones de Archivo

void File::lock(){
 //qDebug() << "Attempting to lock file";

  if (locked) {
   //qDebug() << "File already locked. Aborting";
    return;
  }

  if (fields.size <= 0) {
   //qDebug() << "File has no fields. Aborting lock.";
    return;
  }

  locked = true;

  //Escribir meta al archivo y calcular los tamaños
  writeMeta();
  calculateSizes();

 //qDebug() << "File locked successfully";
  seekFirst();
}

void File::setPath(string nPath){
  path = nPath;
}

bool File::open(){
  bool exists;
  ifstream infile(path);

  if (!infile.good()) {
    ofstream outfile(path);
    outfile.close();
    exists = false;
  }else{
    exists = true;
  }

  infile.close();

  file.close();
  file.open(path, fstream::out | fstream::in);

  if (exists) {
    file.seekg(0, ios::beg);

    char first = file.get();

    if (!isdigit(first) && first != '-') {
     //qDebug() << "File starts with unexpected character. Aborting.";
      return false;
    }
  }

  if (file) {
    if (exists) {
      readMeta();
      seekFirst();
      loadIndex();
    }

   //qDebug() << "File opened successfully";
    return true;
  }

 //qDebug() << "Error opening file";
  return false;
}

bool File::open(string nPath){
  path = nPath;
  return open();
}

void File::close(){
  file.close();

  path = "";
  lastDeleted = -1;
  recordSize = -1;
  metaSize = -1;
  blockSize = 10;
  currentBlock = -1;

  locked = false;

  inBuffer = List<List<string>>(blockSize);
  outBuffer = List<List<string>>(blockSize);
  fields.clear();
  availList.clear();
}


//Escritura de Metadatos

bool File::writeMeta(){
  if (writeAvailList() && writeFields()) {
   //qDebug() << "Meta written successfully";
    return true;
  }

 //qDebug() << "Error at writing meta";
  return false;
}

bool File::writeAvailList(){
  file.clear();

  if (file) {
    file.seekp(0, ios::beg);
    string temp = to_string(lastDeleted);

    while(temp.length() < 6){
      temp += "*";
    }

    if (temp.length() > 6) {
      temp = temp.substr(0, 5);
    }

    temp += "\n";

    file.write(temp.c_str(), temp.length());
    file.flush();
    return true;
  }

  return false;
}

bool File::writeFields(){ //Escribir los campos al meta
  file.clear();

  if (file) {
   //qDebug() << "Writing fields...";
    string out = "";

    /* Estructura del string de los campos:
    type,name,size|type,name,size */

    for (int i = 1; i <= fields.size; i++) { //Leer la lista de campos
      out += to_string(fields[i].getType());
      out += ",";
      out += fields[i].getName();
      out += ",";
      out += to_string(fields[i].getSize());
      out += ",";

      if (fields[i].isPrimaryKey()) {
        out += "1";
      }else{
        out += "0";
      }

      if (i != fields.size) { //No añade un '|' después del último registro
      out += "|";
    }

  }

  out += "\n"; //Agregar un salto de línea

  //Moverse a la posición 8 (el AvailList abarca 7 bytes) y escribir
  file.seekp(8);
  file.write(out.c_str(), out.length());
  file.flush();

 //qDebug() << "Fields written successfully";
  return true;
}

qDebug() << "Error at writing fields";
return false;
}


//Lectura de Metadatos
bool File::readMeta(){
  if (readFields() && readAvailList()) {
   //qDebug() << "Meta read successfully";
    return true;
  }

 //qDebug() << "Error reading meta";
  return false;
}

bool File::readAvailList(){
  file.clear();

  if(file){
    file.seekg(0, ios::beg);

    string in = "";
    for (size_t i = 0; i < 7; i++) {
      in += char(file.get());
    }

    //Eliminar los asteriscos del string
    for (size_t i = 0; i < in.length(); i++) {
     //qDebug() << in[i];
      if (in[i] == '*') {
        in = in.substr(0, i);
        break;
      }
    }

    //Construir el AvailList
    availList.clear();

   //qDebug() << "Starting build with: " << in.c_str();
    lastDeleted = stoi(in);
    buildAvailList(lastDeleted);
   //qDebug() << "AvailList built successfully.";
    return true;
  }

  return false;
}

bool File::readFields(){
  file.clear();

  if (file) {
    string line;
    string field;

    file.seekg(8);
    getline(file, line);

    stringstream pipeStream(line);
    fields.clear();

    while (getline(pipeStream, field, '|')) {
      stringstream commaStream(field);

      string type, name, size, isPrimary;
      getline(commaStream, type, ',');
      getline(commaStream, name, ',');
      getline(commaStream, size, ',');
      getline(commaStream, isPrimary, ',');
     //qDebug() << "Adding field: " << type.c_str() << ", " << name.c_str() << ", " << size.c_str() << ", " << isPrimary.c_str();

      Field nField(stoi(type), name, stoi(size));

      if (isPrimary == "1") {
        nField.setPrimaryKey(true);
      }

      fields.insert(nField);
    }

    calculateSizes();
    return true;
  }

  return false;
}

bool File::buildAvailList(int pos){
  if (recordSize == -1) {
    return false;
  }

  if (pos != -1) {
    file.clear();

    if (file) {
      availList.insert(pos);
      file.seekp(position(pos));
      string in = "";

      getline(file, in);
      for (size_t i = 1; i < in.length(); i++) {
        if (in[i] == '*') {
          in = in.substr(1, i-1);
          break;
        }
      }

     //qDebug() << in.c_str();
      return buildAvailList(stoi(in));

    }else{
      return false;
    }
  }

  return true;
}


//Funciones de Buffer

bool File::addField(int type, string name, int size, bool isPrimaryKey){
  if (!locked) {
    if (isPrimaryKey) {
      Field nField(type, name, size);

      if (hasPrimaryKey()) {
        return false;
      }

      nField.setPrimaryKey(true);
      return fields.insert(nField);
    }else{
      return fields.insert(Field(type, name, size));
    }
  }

  return false;
}

bool File::addField(int type, string name, int size){
  return addField(type, name, size, false);
}

bool File::addField(Field nField){
  if (!locked) {
    return fields.insert(nField);
  }

  return false;
}

bool File::addRecord(List<string> nRecord){
  return outBuffer.insert(nRecord);
}

bool File::hasPrimaryKey(){
  for (int i = 1; i <= fields.size; i++) {
    if (fields[i].isPrimaryKey()) {
      return true;
    }
  }

  return false;
}

bool File::deleteField(int index){
  if (!locked) {
    return fields.remove(index);
  }

  return false;
}

bool File::deleteRecord(int index){
  file.clear(); //Abrir el archivo

  if (file) {
    file.seekp(position(index)); //Buscar la posicion en el archivo del registro a borrar
    string out = "*" + to_string(lastDeleted) + "*"; //Agregar el marcador de borrado (*) y lastDeleted
    file.write(out.c_str(), out.length());

    lastDeleted = index; //Ahora el último borrado es el registro que se acaba de borrar
    writeAvailList(); //Actualizar el meta del archivo
    readAvailList();
    return true;
  }

  return false;
}

bool File::replaceField(int index, int type, string name, int size){
  if (!locked) {
    return fields.replace(index, Field(type, name, size));
  }

  return false;
}

bool File::replaceRecord(int posicion, List<string> nRecord){
  file.clear();

  if (file) {
    file.seekg(position(posicion));

    //Si el registro está marcado como eliminado, no seguir para evitar quiebres en el availList
    if (file.get() == '*') {
      return false;
    }

    file.seekp(position(posicion));

    for (int i = 1; i <= fields.size; i++) {
      string out = nRecord[i]; //Recuperar el dato a escribir

      //Añadir espacios vacíos si el string es más corto que el campo
      while (int(out.length()) < fields[i].getSize()) {
        out += " ";
      }

      //Cortar el string si es muy largo para el campo
      if (int(out.length()) > fields[i].getSize()) {
        out = out.substr(0, fields[i].getSize() - 1);
      }

      //Escribir el string procesado al archivo
      file.write(out.c_str(), out.length());

      //Si no es el último dato del registro, poner una coma
      if (i < fields.size) {
        file.write(",", 1);
      }
    }

    return true;
  }

  return false;
}

bool File::flush(){
  if (locked) {
    file.clear();

    if (file) {
     //qDebug() << "Fields: " << fields.size;

      if (outBuffer.size > 0) {
       //qDebug() << "outBuffer Size: " << outBuffer[1].size;
      }else{
       //qDebug() << "outBuffer is empty. Skipping record flush.";
      }

      for (int i = 1; i <= outBuffer.size; i++) {
        //Determinar en qué posición irá el siguiente registro
        if (!availList.isEmpty()) {
         //qDebug() << "Available position found: " << availList[availList.size];
          file.seekp(position(availList[availList.size])); //Escribir en la siguiente posición del availList
          availList.remove(availList.size);
        }else{
          file.seekp(0, ios_base::end); //Escribir al final del archivo
        }

        for (int j = 1; j <= outBuffer[i].size; j++) {
          string out = outBuffer[i][j]; //Recuperar el dato a escribir
         //qDebug() << "Raw out: " << out.c_str();

          //Añadir espacios vacíos si el string es más corto que el campo
          while (int(out.length()) < fields[j].getSize()) {
            out += " ";
          }

          //Cortar el string si es muy largo para el campo
          if (int(out.length()) > fields[j].getSize()) {
            out = out.substr(0, fields[j].getSize());
          }

          //Escribir el string procesado al archivo
          file.write(out.c_str(), out.length());

          //Si no es el último dato del registro, poner una coma
          if (j < fields.size) {
            file.write(",", 1);
          }
        }

        //Escribir un salto de línea después de cada registro
        file.write("\n", 1);
      }

      file.flush();
      outBuffer.clear();
      return true;
    }else{
      return false;
    }
  }

  return false;
}

bool File::seek(int block){
 //qDebug() << "Seeking block " << block;
  file.clear();

  if (!locked) {
   //qDebug() << "File is NOT locked. Aborting.";
    return false;
  }

  if (file) {
    if (block > blockQuantity()) {
     //qDebug() << "Seeking block beyond blockQuantity. Aborting...";
      return false;
    }

    if (block < 1) {
     //qDebug() << "Seeking block <= 0. Aborting...";
      return false;
    }

    long seekPos = metaSize + (block-1)*blockSize*recordSize;
   //qDebug() << "Seek position: " << seekPos;

    if (seekPos > filesize()) {
     //qDebug() << "Seek position is greater than filesize. Aborting";
      return false;
    }

    file.seekg(seekPos, ios::beg);
    inBuffer.clear();

    int cont = 0;
    string in;

    while (getline(file, in) && cont < blockSize) {
      //qDebug() << "Raw in: " << in.c_str();
      in = in.substr(0, in.length() - 2);

      stringstream inStream(in);
      List<string> nRecord;

      for (int i = 0; i < fields.size; i++) {
        string data;
        getline(inStream, data, ',');

        nRecord.insert(data);
      }

      inBuffer.insert(nRecord);
      cont ++;
    }

   //qDebug() << "Block read successfully";
    currentBlock = block;
    return true;
  }

 //qDebug() << "Error opening file.";
  return false;
}

bool File::reseek(){
  return seek(currentBlock);
}

bool File::next(){
  if (currentBlock <= -1) {
    currentBlock = 1;
  }else{
    currentBlock ++;
  }

  if (seek(currentBlock)) {
    return true;
  }else{
    currentBlock--;
    return false;
  }
}

bool File::previous(){
  currentBlock --;

  if (seek(currentBlock)){
    return true;
  }else{
    currentBlock++;
    return false;
  }
}

bool File::seekFirst(){
  currentBlock = 1;
  return seek(currentBlock);
}

bool File::seekLast(){
  return seek(blockQuantity());
}

bool File::tell(){
  return currentBlock;
}

List<List<string>> File::data(){
  return inBuffer;
}

List<string> File::getRecord(int posicion){
  file.clear();

  if (file) {
    string in;
    file.seekg(position(posicion));
    getline(file, in);

    stringstream inStream(in);
    List<string> nRecord;

    for (int i = 0; i < fields.size; i++) {
      string data;
      getline(inStream, data, ',');

      nRecord.insert(data);
    }

    return nRecord;
  }

  return List<string>(0);
}


//Funciones de Información

int File::fieldQuantity(){
  return fields.size;
}

int File::recordQuantity(){
  if (locked) {
    return (filesize() - metaSize)/recordSize;
  }
  return -1;
}

int File::blockQuantity(){
  if (locked) {
    int fs = filesize();
    int calc = 0;

    if ((fs - metaSize) % blockSize != 0) {
      calc ++;
    }

    calc += (((fs - metaSize)/blockSize)/recordSize);
    return calc;
  }

  return -1;
}

int File::getRecordSize(){
  return recordSize;
}

int File::getMetaSize(){
  return metaSize;
}

int File::getCurrentBlock(){
  return currentBlock;
}

int File::getBlockSize(){
  return blockSize;
}

int File::outSize(){
  return outBuffer.size;
}

string File::getPath(){
  return path;
}

bool File::isLocked(){
  return locked;
}


// Funciones de Indexación
bool File::buildIndex(){
 //qDebug() << "Attempting to build index.";
  file.clear();

  if (!locked) {
   //qDebug() << "File is not locked. Aborting index build.";
    return false;
  }

  if (!hasPrimaryKey()) {
   //qDebug() << "File has no primary key. Aborting index build.";
    return false;
  }

  if (recordQuantity() <= 0) {
   //qDebug() << "No records to index. Aborting index build.";
    return false;
  }

  if (file) {
    index = BTree(3);
    int pastBlock = currentBlock;
    seekFirst();

    int primaryKeyIndex = -1;
    for (int i = 1; i <= fields.size; i++) {
      if (fields[i].isPrimaryKey()) {
        primaryKeyIndex = i;
        break;
      }
    }

   //qDebug() << "Primary Key Index: " << primaryKeyIndex;

    for (int i = 1; i <= blockQuantity(); i++) {
      List<List<string>> block = data();

      for (int j = 1; j <= block.size; j++) {
        index.insert(new Key(block[j][primaryKeyIndex], j + ((i - 1)*blockSize)));
        //qDebug() << "Indexing Key " << block[j][primaryKeyIndex].c_str() << " at " << j + ((i - 1)*blockSize);
      }

      next();
    }

   //qDebug() << "Index built successfully.";
    file.clear();
    seek(pastBlock);

    return true;
  }else{
   //qDebug() << "File unaccesible. Aborting index build.";
    return false;
  }

}

void File::saveIndex(){
 //qDebug() << "Attempting to save index file.";
  ofstream exFile;

  if (!hasPrimaryKey()) {
   //qDebug() << "File has no primary key. Aborting.";
    return;
  }

  exFile.open(string(path + ".index"));

  if (exFile) {
    index.printPrevious();
    exFile << index.getPrintString();
    exFile.flush();
    exFile.close();
    QMessageBox::about(0 ,"Guardado","Archivo de índice guardado exitosamente.");
    exFile.close();
  }else{
    QMessageBox::warning(0 ,"Error","No se pudo guardar el archivo de índice.");
  }
}

void File::loadIndex(){
 //qDebug() << "Attempting to load index file.";
  ifstream inFile;
  inFile.open(string(path + ".index"));

  if (inFile && hasPrimaryKey()) {
    index = BTree(3);
    string buff = "";

    while (getline(inFile, buff, '\n')) {
      stringstream commaStream(buff);

      string nKey, nIndex;
      getline(commaStream, nKey, ',');
      getline(commaStream, nIndex);

      index.insert(new Key(nKey, stoi(nIndex)));
    }

   //qDebug() << "Index file loaded successfully.";
    inFile.close();
  }else{
   //qDebug() << "Index file could not be opened.";
  }
}

bool File::seekRecord(string key){
  int pkLength = -1;

  for (int i = 1; i <= fields.size; i++) {
    if (fields[i].isPrimaryKey()) {
      pkLength = fields[i].getSize();
    }
  }

  if (pkLength != -1) {
    //Añadir espacios vacíos si el string es más corto que el campo
    while (int(key.length()) < pkLength) {
      key += " ";
    }

    //Cortar el string si es muy largo para el campo
    if (int(key.length()) > pkLength) {
      key = key.substr(0, pkLength);
    }

    int ind = index.findIndex(key);
   //qDebug() << "Find Index for " << key.c_str() << " " << ind;

    if (ind == -1) {
      return false;
    }else{
      seek(floor(ind/blockSize) + 1);
      return true;
    }
  }

  return false;
}


// Funciones de Exportación

void File::exportCSV(string exPath){
  ofstream exFile;
  exFile.open(exPath);

  if (exFile) {
    for (int i = 1; i <= fields.size; i++) {
      exFile << fields[i].getName();

      if (i < fields.size) {
        exFile << ",";
      }
    }

    exFile << endl;

    seekFirst();
    for (int i = 1; i <= blockQuantity(); i++) {
      List<List<string>> block = data();

      for (int j = 1; j <= block.size; j++) {
        for (int k = 1; k <= block[j].size; k++) {
          exFile << block[j][k];

          if (k < block[j].size) {
            exFile << ",";
          }
        }

        exFile << endl;
      }

      next();
    }

    exFile.close();
  }
}

void File::exportXML(string exPath){
  ofstream exFile;
  exFile.open(exPath);

  if (exFile) {
    string exPathXsl = exPath.substr(0, (exPath.length() - 4));
    exPathXsl += ".xsl";

    for (int i = exPathXsl.length() - 1; i >= 0; i--) {
      if (exPathXsl[i] == '/') {
        exPathXsl = exPathXsl.substr(i + 1, exPathXsl.length());
      }
    }

   //qDebug() << exPathXsl.c_str();

    exFile
    << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << endl
    << "<?xml-stylesheet type=\"text/xsl\" href=\"" << exPathXsl << "\"?>" << endl << endl
    << "<file>" << endl
    << '\t'<< "<fields>" << endl;

    for (int i = 1; i <= fields.size; i++) {
      exFile
      << '\t' << '\t' << "<field>" << endl
      << '\t' << '\t' << '\t' << "<name>" << fields[i].getName() << "</name>" << endl
      << '\t' << '\t' << '\t' << "<type>" << fields[i].getType() << "</type>" << endl
      << '\t' << '\t' << '\t' << "<size>" << fields[i].getSize() << "</size>" << endl
      << '\t' << '\t' << "</field>" << endl;
    }

    exFile
    << '\t' << "</fields>" << endl << endl
    << '\t' << "<records>" << endl;

    seekFirst();
    for (int i = 1; i <= blockQuantity(); i++) {
      List<List<string>> block = data();

      for (int j = 1; j <= block.size; j++) {
        exFile << '\t' << '\t' << "<record>" << endl;

        for (int k = 1; k <= block[j].size; k++) {
          exFile
          << '\t' << '\t' << '\t' << "<value>" << endl
          << '\t' << '\t' << '\t' << '\t' << "<data>" << block[j][k] << "</data>" << endl
          << '\t' << '\t' << '\t' << "</value>" << endl;
        }

        exFile << '\t' << '\t' << "</record>" << endl;
      }

      next();
    }

    exFile << '\t' << "</records>" << endl
    << "</file>" << endl;

    exFile.clear();
    exFile.close();
    exFile.open(string(exPath.substr(0, (exPath.length() - 4)) + ".xsl"));

    if (exFile) {
      exFile
      << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << endl
      << "<xsl:stylesheet version=\"1.0\" xmlns:xsl=\"http://www.w3.org/1999/XSL/Transform\">" << endl
      << "<xsl:template match=\"file\">" << endl
      << "<html>" << endl
      << "<body style = \"background-color: #EEEEEE; text-align: center; font-family: Verdana; \">" << endl
      << '\t' << "<div style = \"margin: 20px 20px 20px 20px; border: 5px solid white; border-radius = 25px; background-color: white; padding: 10px; box-shadow: 0px 0px 18px #888888; overflow: hidden;\">" << endl
      << '\t' << '\t' << "<h1>Archivo de Registros</h1>" << endl
      << '\t' << '\t' << "<h2>Exportado de Sota File Manager</h2>" << endl
      << '\t' << '\t' << "<table style = \"width: 100%; font-family: Arial;\">" << endl
      << '\t' << '\t' << '\t' << "<tr bgcolor =\"#3F51B5\" style = \"color:white;\">" << endl
      << '\t' << '\t' << '\t' << '\t' << "<xsl:for-each select=\"/file/fields/field\">" << endl
      << '\t' << '\t' << '\t' << '\t' << '\t' << "<td><xsl:value-of select=\"name\"/></td>" << endl
      << '\t' << '\t' << '\t' << '\t' << "</xsl:for-each>" << endl
      << '\t' << '\t' << '\t' << "</tr>" << endl
      << '\t' << '\t' << '\t' << "<xsl:for-each select=\"/file/records/record\">" << endl
      << '\t' << '\t' << '\t' << '\t' << "<tr>" << endl
      << '\t' << '\t' << '\t' << '\t' << '\t' << "<xsl:for-each select=\"value\">" << endl
      << '\t' << '\t' << '\t' << '\t' << '\t' << '\t' << "<td><xsl:value-of select=\"data\"/></td>" << endl
      << '\t' << '\t' << '\t' << '\t' << '\t' << "</xsl:for-each>" << endl
      << '\t' << '\t' << '\t' << '\t' << "</tr>" << endl
      << '\t' << '\t' << '\t' << "</xsl:for-each>" << endl
      << '\t' << '\t' << "</table>" << endl
      << '\t' << "</div>" << endl
      << "</body>" << endl
      << "</html>" << endl
      << "</xsl:template>" << endl
      << "</xsl:stylesheet>" << endl;

      exFile.flush();
      exFile.close();
    }
  }
}

File::~File(){
  file.close();
}
