#include "Field.h"

Field::Field(){
  type = 0;
  name = "Undefined";
  size = 10;
  primaryKey = false;
}

Field::Field(int nType, string nName, int nSize){
  type = nType;
  name = nName;
  size = nSize;
  primaryKey = false;

  if (type == 1) {
    size = 1;
  }
}

bool Field::isPrimaryKey(){
  return primaryKey;
}

int Field::getType(){
  return type;
}

int Field::getSize(){
  return size;
}

string Field::getName(){
  return name;
}

void Field::setPrimaryKey(bool nPrimaryKey){
  primaryKey = nPrimaryKey;
}

void Field::setType(int nType){
  type = nType;

  if (type == 1) {
    size = 1;
  }
}

void Field::setSize(int nSize){
  size = nSize;
}

void Field::setName(string nName){
  name = nName;
}
