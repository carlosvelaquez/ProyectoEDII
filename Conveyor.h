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
  fstream file;
  string ruta;
  bool locked = false;

  int lastDeleted;
  int recordSize;

  List<int> availList;
  List<Field> fields; //Campos del archivo actual
  List<Record> loadedRecords; //Registros cargados

public:
  Conveyor();
  Conveyor(string); // Ruta del archivo

  void lock();

  bool writeAvailList();
  bool writeFields();
  bool writeRecords();

  bool readAvailList();
  bool readFields();
  bool readRecords();

  bool buildAvailList(int);

};

#endif /* end of include guard: CONVEYOR_H */
