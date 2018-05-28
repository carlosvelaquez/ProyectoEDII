#include "Conveyor.h"

Conveyor::Conveyor(){
  path = "";
  lastDeleted = -1;
}

Conveyor::Conveyor(string nRuta){
  path = nRuta;
  lastDeleted = -1;
}

void Conveyor::setPath(string nPath){
  path = nPath;
}

List<Field> Conveyor::getFields(){
  return fields;
}

int Conveyor::fieldQuantity(){
  return fields.size;
}

int Conveyor::recordQuantity(){
  return loadedRecords.size;
}

//Escribir la primera posición del AvailList al meta
bool Conveyor::writeAvailList(){
  file.open(path, ios::out);

  if (file.is_open()) {
    file.seekp(0, ios::beg);
    string temp = to_string(lastDeleted);

    for (int i = temp.length(); i <= 7; i++){
      temp += "*";
    }

    file.write(temp.c_str(), temp.length());
    file.close();
    return true;

  }

  file.close();
  return false;
}

bool Conveyor::writeFields(){ //Escribir los campos al meta
  file.open(path, ios::out);

  if (file) {
    string out = "";

    /* Estructura del string de los campos:
        type,name,size|type,name,size */

    for (int i = 1; i <= fields.size; i++) { //Leer la lista de campos
      out += fields[i].getType();
      out += ",";
      out += fields[i].getName();
      out += ",";
      out += fields[i].getSize();

      if (i != fields.size) { //No añade un '|' después del último registro
        out += "|";
      }
    }

    //Moverse a la posición 8 (el AvailList abarca 7 bytes) y escribir
    file.seekp(8);
    file.write(out.c_str(), out.length());

    return true;
  }

  return false;
}

bool Conveyor::readAvailList(){
  file.open(path, ios::in);

  if(file.is_open()){
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
  file.open(path, ios::in);

  if (file) {
    string line;
    string field;
    file.seekp(8);
    getline(file, line);
    stringstream pipeStream(line);

    while (getline(pipeStream, field, '|')) {
      stringstream commaStream(field);

      string type, name, size;
      getline(commaStream, type, ',');
      getline(commaStream, name, ',');
      getline(commaStream, size, ',');

      fields.insert(Field(stoi(type), name, stoi(size)));
    }

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

bool Conveyor::addField(int type, string name, int size){
  return fields.insert(Field(type, name, size));
}

bool Conveyor::deleteRecord(int index){
  file.open(path, ios::out);

  if (file) {
    file.seekp((recordSize*index) + metaSize);
    string out = "*" + to_string(lastDeleted) + "*";
    file.write(out.c_str(), out.length());

    file.close();
    lastDeleted = index;
    return true;
  }

  file.close();
  return false;
}
