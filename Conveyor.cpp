#include "Conveyor.h"

//Funciones de apoyo

void Conveyor::calculateSizes(){
  //Calcular el tamaño en bytes de los registros
  recordSize = 0;

  for (int i = 1; i <= fields.size; i++) {
    //Suma los tamaños de todos los campos
    recordSize += fields[i].getSize();
  }

  /*Suma la cantidad de campos, ya que la cantidad de comas más un salto de línea
  equivalen a la cantidad de campos que hay.*/
  recordSize += fields.size;
  qDebug() << "Record size: " << recordSize;


  //Calcular el tamaño en bytes abarcado por el meta
  file.clear();
  file.seekg(8); //Busca la primera posición de la línea donde comienza la info de los campos
  file.ignore(numeric_limits<streamsize>::max(), '\n');

  //El tamaño del meta sería todo lo que ha recorrido hasta que termina la info de campos más un salto de línea
  metaSize = file.tellg();
  qDebug() << "Meta size: " << metaSize;
}

int Conveyor::position(int index){
  return (recordSize*index) + metaSize;
}

long Conveyor::filesize(){
  file.clear();

  if (file) {
    file.seekg(0, ios_base::end);
    long ret = file.tellg();

    qDebug() << "Filesize: " << ret;
    return ret;
  }

  return -1;
}


//Constructores

Conveyor::Conveyor(){
  path = "";
  lastDeleted = -1;
  recordSize = -1;
  metaSize = -1;
  blockSize = 10;
  currentBlock = -1;

  locked = false;

  recordBuffer = List<List<string>>(blockSize);
}

Conveyor::Conveyor(string nPath){
  path = nPath;
  lastDeleted = -1;
  recordSize = -1;
  metaSize = -1;
  blockSize = 10;
  currentBlock = -1;

  locked = false;

  recordBuffer = List<List<string>>(blockSize);

  readMeta();
}

Conveyor::Conveyor(string nPath, int nBlockSize){
  path = nPath;
  lastDeleted = -1;
  recordSize = -1;
  metaSize = -1;
  blockSize = nBlockSize;
  currentBlock = -1;

  locked = false;

  recordBuffer = List<List<string>>(blockSize);

  readMeta();
}

List<Field> Conveyor::getFields(){
  return fields;
}


//Funciones de Archivo

void Conveyor::lock(){
  locked = true;

  //Escribir meta al archivo y calcular los tamaños
  writeMeta();
  calculateSizes();
}

void Conveyor::setPath(string nPath){
  path = nPath;
}

bool Conveyor::open(){
  ofstream outfile(path);
  outfile.close();
  
  file.close();
  file.open(path, fstream::out | fstream::in);

  if (file) {
    return true;
  }

  return false;
}

bool Conveyor::open(string nPath){
  path = nPath;
  return open();
}

void Conveyor::close(){
  file.close();
}


//Escritura de Metadatos

bool Conveyor::writeMeta(){
  if (writeAvailList() && writeFields()) {
    return true;
  }

  return false;
}

bool Conveyor::writeAvailList(){
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

bool Conveyor::writeFields(){ //Escribir los campos al meta
  file.clear();

  if (file) {
    string out = "";

    /* Estructura del string de los campos:
    type,name,size|type,name,size */

    for (int i = 1; i <= fields.size; i++) { //Leer la lista de campos
      out += to_string(fields[i].getType());
      out += ",";
      out += fields[i].getName();
      out += ",";
      out += to_string(fields[i].getSize());

      if (i != fields.size) { //No añade un '|' después del último registro
      out += "|";
    }

  }

  out += "\n"; //Agregar un salto de línea

  //Moverse a la posición 8 (el AvailList abarca 7 bytes) y escribir
  file.seekp(9);
  file.write(out.c_str(), out.length());
  file.flush();

  return true;
}

return false;
}


//Lectura de Metadatos
bool Conveyor::readMeta(){
  if (readAvailList() && readFields()) {
    return true;
  }

  return false;
}

bool Conveyor::readAvailList(){
  file.clear();

  if(file){
    string in = "";
    getline(file, in);

    //Eliminar los asteriscos del string
    for (size_t i = 0; i < in.length(); i++) {
      if (in[i] == '*') {
        in = in.substr(0, i-1);
        break;
      }
    }

    //Construir el AvailList
    availList.clear();
    buildAvailList(stoi(in));

    return true;
  }

  return false;
}

bool Conveyor::readFields(){
  file.clear();

  if (file) {
    string line;
    string field;

    file.seekp(9);
    getline(file, line);

    stringstream pipeStream(line);
    fields.clear();

    while (getline(pipeStream, field, '|')) {
      stringstream commaStream(field);

      string type, name, size;
      getline(commaStream, type, ',');
      getline(commaStream, name, ',');
      getline(commaStream, size, ',');

      fields.insert(Field(stoi(type), name, stoi(size)));
    }

    calculateSizes();
    return true;
  }

  return false;
}

bool Conveyor::buildAvailList(int pos){
  if (recordSize == -1) {
    return false;
  }

  if (pos != -1) {
    if (file) {
      file.seekp(position(pos));
      string in = "";

      getline(file, in);
      for (size_t i = 1; i < in.length(); i++) {
        if (in[i] == '*') {
          in = in.substr(1, i-1);
          break;
        }
      }

      return buildAvailList(stoi(in));

    }else{
      return false;
    }
  }

  return true;
}


//Funciones de Buffer

bool Conveyor::addField(int type, string name, int size){
  if (!locked) {
    return fields.insert(Field(type, name, size));
  }

  return false;
}

bool Conveyor::addRecord(List<string> nRecord){
  return recordBuffer.insert(nRecord);
}

bool Conveyor::deleteField(int index){
  if (!locked) {
    return fields.remove(index);
  }

  return false;
}

bool Conveyor::deleteRecord(int index){
  file.clear(); //Abrir el archivo

  if (file) {
    file.seekp(position(index)); //Buscar la posicion en el archivo del registro a borrar
    string out = "*" + to_string(lastDeleted) + "*"; //Agregar el marcador de borrado (*) y lastDeleted
    file.write(out.c_str(), out.length());

    lastDeleted = index; //Ahora el último borrado es el registro que se acaba de borrar
    writeAvailList(); //Actualizar el meta del archivo
    return true;
  }

  return false;
}

bool Conveyor::replaceField(int index, int type, string name, int size){
  if (!locked) {
    return fields.replace(index, Field(type, name, size));
  }

  return false;
}

bool Conveyor::replaceRecord(int posicion, List<string> nRecord){
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
      while (out.length() < fields[i].getSize()) {
        out += " ";
      }

      //Cortar el string si es muy largo para el campo
      if (out.length() > fields[i].getSize()) {
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

bool Conveyor::flush(){
  if (locked) {
    file.clear();

    if (file) {
      for (int i = 1; i <= recordBuffer.size; i++) {

        //Determinar en qué posición irá el siguiente registro
        if (!availList.isEmpty()) {
          file.seekp(position(availList[availList.size])); //Escribir en la siguiente posición del availList
          availList.remove(availList.size);
        }else{
          file.seekp(0, ios_base::end); //Escribir al final del archivo
        }

        for (int j = 1; j <= fields.size; j++) {
          string out = recordBuffer[i][j]; //Recuperar el dato a escribir
          qDebug() << "Raw out: " << out.c_str();

          //Añadir espacios vacíos si el string es más corto que el campo
          while (out.length() < fields[j].getSize()) {
            out += " ";
          }

          //Cortar el string si es muy largo para el campo
          if (out.length() > fields[j].getSize()) {
            out = out.substr(0, fields[j].getSize() - 1);
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
      recordBuffer.clear();
      return true;
    }else{
      return false;
    }
  }

  return false;
}

bool Conveyor::seek(int block){
  qDebug() << "Seeking block " << block;
  file.clear();

  if (!locked) {
    qDebug() << "File is NOT locked. Aborting.";
    return false;
  }

  if (file) {
    qDebug() << "File opened succesfully.";
    long seekPos = metaSize + (block-1)*blockSize*recordSize;
    qDebug() << "Seek position: " << seekPos;

    if (seekPos > filesize()) {
      qDebug() << "Seek position is greater than filesize. Aborting";
      return false;
    }

    file.seekg(seekPos);
    recordBuffer.clear();

    int cont = 0;
    string in;

    while (getline(file, in) && cont < blockSize) {
      qDebug() << "Raw in: " << in.c_str();
      in = in.substr(0, in.length() - 2);

      stringstream inStream(in);
      List<string> nRecord;

      for (int i = 0; i < fields.size; i++) {
        string data;
        getline(inStream, data, ',');

        nRecord.insert(data);
      }

      recordBuffer.insert(nRecord);
      cont ++;
    }

    qDebug() << "Block read successfully";
    return true;
  }

  qDebug() << "Error opening file.";
  return false;
}

bool Conveyor::next(){
  if (currentBlock <= -1) {
    currentBlock = 1;
  }else{
    currentBlock ++;
  }

  return seek(currentBlock);
}

bool Conveyor::previous(){
  currentBlock --;
  return seek(currentBlock);
}

bool Conveyor::seekFirst(){
  currentBlock = 1;
  return seek(currentBlock);
}

bool Conveyor::seekLast(){
  return seek(blockQuantity());
}

bool Conveyor::tell(){
  return currentBlock;
}

List<List<string>> Conveyor::data(){
  return recordBuffer;
}

List<string> Conveyor::getRecord(int posicion){
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

int Conveyor::fieldQuantity(){
  return fields.size;
}

int Conveyor::recordQuantity(){
  if (locked) {
    return (filesize() - metaSize)/recordSize;
  }

  return -1;
}

int Conveyor::blockQuantity(){
  if (locked) {
    return ((filesize() - metaSize)/blockSize)/recordSize;
  }

  return -1;
}

int Conveyor::getRecordSize(){
  return recordSize;
}

int Conveyor::getMetaSize(){
  return metaSize;
}

bool Conveyor::isLocked(){
  return locked;
}


Conveyor::~Conveyor(){
  file.close();
}
