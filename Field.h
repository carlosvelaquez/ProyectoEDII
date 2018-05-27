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
  Field();

  //Type, Name, Size
  Field(int, string, int);

  // Getters
  bool isPrimaryKey();
  int getType();
  int getSize();
  string getData();
  string getName();

  // Setters
  void setPrimaryKey(bool);
  void setType(int);
  void setSize(int);
  void setData(string);
  void setName(string);
};

#endif
