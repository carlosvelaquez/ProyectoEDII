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
  List<Record> loadedRecords; //Registros cargados
  string ruta;

public:
  Conveyor();
  Conveyor(string); // Ruta del archivo

  bool writeAvailList();
  bool writeFields();
  bool read();
  bool readFields();
};

#endif /* end of include guard: CONVEYOR_H */
