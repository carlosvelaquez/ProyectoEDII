#include "Conveyor.h"

Conveyor::Conveyor(){
  path = "";
  lastDeleted = -1;
  locked = false;
}

Conveyor::Conveyor(string nRuta){
  path = nRuta;
  lastDeleted = -1;
  locked = false;
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
  return recordBuffer.size;
}

void Conveyor::lock(){
  locked = true;
  recordSize = Record(fields).size();

  writeAvailList();
  writeFields();
}

//Escribir la primera posición del AvailList al meta
bool Conveyor::writeAvailList(){
  file.close();
  file.open(path, ios::out);

  if (file) {
    file.seekp(0, ios::beg);
    string temp = to_string(lastDeleted);

    for (int i = temp.length(); i <= 6; i++){
      temp += "*";
    }

    temp += "\n";

    file.write(temp.c_str(), temp.length());
    file.close();
    return true;
  }

  file.close();
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

bool Conveyor::writeRecords(){
  if (locked) {
    file.close();
    file.open(path, ios::out | ios::app);

    if (file) {
      for (int i = 1; i <= recordBuffer.size; i++) {
        if (!availList.isEmpty()) {
          file.seekp((recordSize*availList[availList.size]) + metaSize);
        }else{
          file.seekp(0, ios_base::end);
        }

        for (int j = 1; j <= recordBuffer[i].size(); j++) {
          string out = recordBuffer[i].toString();
          file.write(out, out.length());
        }
      }

    }else{
      file.close();
      return false;
    }

    file.close();
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

    file.seekp(9);
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

bool Conveyor::addRecord(Record nRecord){
  return recordBuffer.insert(nRecord);
}

bool Conveyor::deleteField(int index){
  return fields.remove(index);
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

List<Record> Conveyor::getRecords(){
  return recordBuffer;
}

int Conveyor::getRecordSize(){
  return recordSize;
}

int Conveyor::getMetaSize(){
  return metaSize;
}

int Conveyor::isLocked(){
  return locked;
}
