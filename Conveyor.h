#ifndef CONVEYOR_H
#define CONVEYOR_H

#include "List.h"
#include "Field.h"
#include "Record.h"
#include <fstream>
#include <sstream>

using namespace std;

class Conveyor{

private:
  int lastDeleted;
  List<int> availList;

  fstream file;
  List<Field> fields; //Campos del archivo actual
  List<Record> loadedRecords;
  string ruta;

public:
  Conveyor();
  Conveyor(string); // Ruta del archivo

  bool updateMeta();
  bool read();
};

#endif /* end of include guard: CONVEYOR_H */
