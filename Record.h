#ifndef RECORD_H
#define RECORD_H

#include <string>
#include "List.h"
#include "Field.h"

using namespace std;

class Record{

private:
  string* data;
  List<Field> fields;

public:
  Record();
  Record(List<Field>);

  List<string> getDataList();
  List<Field> getFields();

  bool insertData(int, string);
  int fieldQuantity();

  string toString();
  int size();

  string operator[](int index){
    if (index >= fields.size || index < 0) {
      return "X";
    }

    return data[index];
  }

};

#endif /* end of include guard: RECORD_H */
