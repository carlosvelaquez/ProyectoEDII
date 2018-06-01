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


  //Calcular el tamaño en bytes abarcado por el meta
  file.close();
  file.open(path, ios::in);

  file.seekg(9); //Busca la primera posición de la línea donde comienza la info de los campos
  file.ignore(numeric_limits<streamsize>::max(), '\n'); //Sigue leyendo hasta que encuentra un salto de línea

  metaSize = file.tellg(); //El tamaño del meta sería todo lo que ha recorrido hasta que termina la info de campos
}

int Conveyor::position(int index){
  return (recordSize*index) + metaSize;
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


//Escritura de Metadatos

bool Conveyor::writeMeta(){
  if (writeAvailList() && writeFields()) {
    return true;
  }

  return false;
}

bool Conveyor::writeAvailList(){
  file.close();
  file.open(path, ios::out | ios::app);

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
    file.close();
    return true;
  }

  return false;
}

bool Conveyor::writeFields(){ //Escribir los campos al meta
  file.close();
  file.open(path, ios::out | ios::app);

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

  //Moverse a la posición 8 (el AvailList abarca 7 bytes) y escribir
  file.seekp(9);
  file.write(out.c_str(), out.length());
  metaSize = out.length() + 8;

  file.close();
  return true;
}

file.close();
return false;
}


//Lectura de Metadatos
bool readMeta(){
  if (readAvailList() && readFields()) {
    return true;
  }

  return false;
}

bool Conveyor::readAvailList(){
  file.open(path, ios::in);

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

    file.close();
    return true;
  }

  file.close();
  return false;
}

bool Conveyor::readFields(){
  file.close();
  file.open(path, ios::in);

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
    file.close();
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
      file.seekp((recordSize*pos) + metaSize);
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
      return true;
    }
  }

  return false;
}


//Funciones de Buffer

bool Conveyor::addField(int type, string name, int size){
  return fields.insert(Field(type, name, size));
}

bool Conveyor::addRecord(List<string> nRecord){
  return recordBuffer.insert(nRecord);
}

bool Conveyor::deleteField(int index){
  return fields.remove(index);
}

bool Conveyor::deleteRecord(int index){
  file.open(path, ios::out | ios::app); //Abrir el archivo

  if (file) {
    file.seekp(position(index)); //Buscar la posicion en el archivo del registro a borrar
    string out = "*" + to_string(lastDeleted) + "*"; //Agregar el marcador de borrado (*) y lastDeleted
    file.write(out.c_str(), out.length());

    file.close();
    lastDeleted = index; //Ahora el último borrado es el registro que se acaba de borrar
    writeAvailList(); //Actualizar el meta del archivo
    return true;
  }

  return false;
}

bool Conveyor::flush(){
  if (locked) {
    file.close();
    file.open(path, ios::out | ios::app);

    if (file) {
      for (int i = 1; i <= recordBuffer.size; i++) {

        //Determinar en qué posición irá el siguiente registro
        if (!availList.isEmpty()) {
          file.seekp(position(availList[availList.size])); //Escribir en la siguiente posición del availList
          availList.remove(availList.size);
        }else{
          file.seekp(0, ios_base::end); //Escribir al final del archivo
        }

        for (int j = 1; j <= fields.size(); j++) {
          string out = recordBuffer[i][j]; //Recuperar el dato a escribir

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
          if (j < recordBuffer[i].size()) {
            file.write(",", 1);
          }
        }

        //Escribir un salto de línea después de cada registro
        file.write("\n", 1);
      }

      file.close(); //Cerrar el archivo
      return true;

    }else{
      return false;
    }
  }

  return false;
}


//Funciones de Información

int Conveyor::fieldQuantity(){
  return fields.size;
}

int Conveyor::recordQuantity(){
  return recordBuffer.size;
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
