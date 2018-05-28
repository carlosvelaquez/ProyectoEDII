#include "Conveyor.h"

Conveyor::Conveyor(){
  ruta = "";
  lastDeleted = -1;
}

Conveyor::Conveyor(string nRuta){
  ruta = nRuta;
  lastDeleted = -1;
}

//Escribir la primera posición del AvailList al meta
bool Conveyor::writeAvailList(){
  file.open(ruta, ios::out);

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
  file.open(ruta, ios::out);

  if (file) {
    string out = "";

    /* Estructura del string de los campos:
        type,name,size|type,name,size */

    for (int i = 1; i <= fields.size; i++) { //Leer la lista de campos
      out += fields[i].getType();


      if (i != fields.size) { //No añade un '|' después del último registro
        out += "|";
      }
    }
    return true;
  }

  return false;
}

bool Conveyor::read(){
  file.open(ruta, ios::in);

  if(file.is_open()){
    //lectura/construcción
    file.seekp(0, ios::beg);
    file.seekp(7, ios::cur);

    return true;
  }

  return false;
}

bool Conveyor::readFields(){
  //lectura de campos
  string line = "";
  getline(file, line);
  stringstream ss(line);

  return false;
}
