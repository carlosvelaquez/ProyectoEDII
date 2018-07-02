#ifndef FIELD_H
#define FIELD_H

#include <string>
using namespace std;

class Field{

private:
  bool primaryKey;
  int type;
  string name;

public:
  int size;
  //Variables constantes de tipo
  /*static const short INT = 0;
  static const short CHAR = 1;
  static const short STRING = 2;*/

  // Constructores
  Field();
  Field(int, string, int); //Type, Name, Size

  // Getters
  bool isPrimaryKey();
  int getType();
  int getSize();
  string getName();

  // Setters
  void setPrimaryKey(bool);
  void setType(int);
  void setSize(int);
  void setName(string);

  // Operators
  bool operator==(Field nField){
    if (nField.getName() == name && nField.getType() == type && nField.getSize() == size) {
      return true;
    }

    return false;
  }
};

#endif
