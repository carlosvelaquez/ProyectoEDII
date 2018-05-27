#include "Field.h"

Field::Field(int nType, string nName, int nSize){
  type = nType;
  name = nName;
  size = nSize;
  primaryKey = false;
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
}

void Field::setSize(int nSize){
  size = nSize;
}

void Field::setName(string nName){
  name = nName;
}
