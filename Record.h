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

  int size();

};

#endif /* end of include guard: RECORD_H */
