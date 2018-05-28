#ifndef CONVEYOR_H
#define CONVEYOR_H

#include "Conveyor.h"
#include "List.h"
#include "Field.h"
#include "Record.h"
#include <fstream>
#include <sstream>

using namespace std;

class Conveyor{

private:
  fstream file;
  string path;
  bool locked;

  int lastDeleted;
  int recordSize;
  int metaSize;

  List<int> availList;
  List<Field> fields; //Campos del archivo actual
  List<Record> loadedRecords; //Registros cargados

public:
  Conveyor();
  Conveyor(string); // Ruta del archivo

  void setPath(string);

  List<Field> getFields();

  //void lock()
  int fieldQuantity();
  int recordQuantity();

  bool writeAvailList();
  bool writeFields();
  bool writeRecords();

  bool readAvailList();
  bool readFields();
  bool readRecords();

  bool buildAvailList(int);

  bool addField(int, string, int);

  bool deleteRecord(int);
};

#endif /* end of include guard: CONVEYOR_H */
