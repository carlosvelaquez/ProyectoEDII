#ifndef FIELD_H
#define FIELD_H

#include <string>
using namespace std;
class Field{

private:
  bool primaryKey;
  int type;
  int size;
  string name;

public:
  //Variables constantes de tipo
  const int INT = 0;
  const int CHAR = 1;
  const int STRING = 2;

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
};

#endif
