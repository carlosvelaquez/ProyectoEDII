#include "Record.h"

Record::Record(){
  /*fields.clear();
  data = 0;*/
}

Record::Record(List<Field> nFields){
  /*fields = nFields;
  data = new string[fields.size];

  for (int i = 0; i < fields.size; i++) {
    string out = "";

    for (size_t i = 0; i < fields[i+1].size(); i++) {
      out += "-";
    }

    data[i] = out;
  }*/
}

bool Record::insertData(int index, string dat){
  /*if (index >= fields.size || index < 0) {
    return false;
  }else{
    while (dat.length() < fields[index].getSize()) {
      dat += "-";
    }

    if (dat.length() > fields[index].getSize()) {
      dat = dat.substr(0, fields.getSize());
    }

    data[index] = dat;
    return true;
  }*/
    return false;
}

List<string> Record::getDataList(){
  /*List<string> retList;

  for (int i = 0; i < fields.size; i++) {
    retList.insert(data[i]);
  }
*/
  return 0;
}

int Record::fieldQuantity(){
  return 0;
}

string Record::toString(){
  /*string out = "";

  for (int i = 0; i < fields.size; i++) {
    out += data[i];

    if (i != fields.size - 1) {
      out += ",";
    }
  }

  out += "\n";*/
  return "out";
}

int Record::size(){
  return 0;
}

