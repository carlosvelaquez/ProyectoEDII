#ifndef RECORD_H
#define RECORD_H

#include <string>
#include "List.h"
#include "Field.h"

using namespace std;

class Record{

private:
  List<string> data;

public:
  Record();
  Record(List<string>);

  List<string> getData(){
    return data;
  }

  void insertData(string dat){
    data.insert(dat);
  }

};

#endif /* end of include guard: RECORD_H */
