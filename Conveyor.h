#ifndef CONVEYOR_H
#define CONVEYOR_H

//#include <QDebug>

#include "List.h"
#include "Field.h"
#include <fstream>
#include <sstream>
#include <limits>

using namespace std;

class Conveyor{

private:
  //Propiedades del archivo
  fstream file; //Filestream del archivo
  string path; //Ruta del archivo que utilzará el Conveyor

  bool locked; //Si está bloqueado el archivo no se pueden añadir/modificar/eliminar campos

  int lastDeleted; //Índice del último registro borrado
  int recordSize; //Tamaño en bytes abarcado por un registro
  int metaSize; //Tamaño en bytes abarcado por el meta

  List<int> availList; //Espacios disponibles en el archivo
  List<Field> fields; //Campos del archivo actual


  //Propiedades de buffer
  int blockSize; //Tamaño del buffer (o bloque)
  int currentBlock; //Bloque actual que el buffer está leyendo/escribiendo

  List<List<string>> recordBuffer; //Registros cargados en memoria


  //Funciones de apoyo
  bool buildAvailList(int); //Función recursiva que construye la lista de posiciones disponibles
  void calculateSizes(); //Calcula tamaños importantes como metaSize y recordSize
  int position(int); //Calcula la posición del registro en el índice proporcionado
  long filesize(); //Calcula el tamaño del archivo


public:
  //Constructores
  Conveyor(); //Inicializar sin ruta del archivo y valores por defecto
  Conveyor(string); //Inicializar con ruta del archivo y tamaño del bloque por defecto
  Conveyor(string, int); //Inicializar con ruta + tamaño del bloque proporcionado


  //Funciones de Archivo
  void lock(); //Bloquear el archivo para inhibir cambios en los campos
  void setPath(string); //Proporcionar una nueva ruta de archivo


  //Escritura de Metadatos
  bool writeMeta(); //Llama a ambos métodos de escritura de metadatos
  bool writeAvailList(); //Escribir la última posición borrada (lastDeleted) al meta
  bool writeFields(); //Escribir la información de los campos de usuario al meta


  //Lectura de Metadatos
  bool readMeta(); //Llama a ambos métodos de escritura de metadatos
  bool readAvailList(); //Leer la última posición borrada (lastDeleted) del meta
  bool readFields(); //Leer la información de los campos de usuario del meta


  //Funciones de Buffer
  bool addField(int, string, int); //Añadir un nuevo campo [tipo, nombre, tamaño]
  bool addRecord(List<string>); //Añade un registro al buffer, toma una lista de strings como datos

  bool deleteField(int); //Borra un campo de la lista de campos (si no está bloqueado el archivo)
  bool deleteRecord(int); //Borra un registro (debe estar escrito en el archivo)

  bool flush(); //Escribe todos los registros del buffer al archivo

  bool seek(int); //Busca el n-ésimo bloque (n es el parámetro)
  bool next(); //Pasa al siguiente bloque
  bool previous(); //Retorna al bloque anterior
  bool seekFirst(); //Busca el primer bloque
  bool seekLast(); //Busca el último bloque
  bool tell(); //Retorna la posición del bloque actual

  List<List<string>> data(); //Retorna el bloque actual

  List<string> getRecord(int); //Retorna el n-ésimo registro
  bool replaceRecord(int, List<string>); //Reemplaza el n-ésimo registro


  //Funciones de Información
  List<Field> getFields(); //Retorna fields

  int fieldQuantity(); //Cantidad de campos en el archivo
  int recordQuantity(); //Cantidad de registros en el buffer
  int blockQuantity(); //Cantidad de bloques en el archivo
  int getRecordSize(); //Retorna recordSize
  int getMetaSize(); //Retorna metaSize

  bool isLocked(); //Retorna locked

};

#endif
