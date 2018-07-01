#ifndef FILE_H
#define FILE_H

#include <QDebug>

#include "List.h"
#include "Field.h"
#include <fstream>
#include <sstream>
#include <limits>

using namespace std;

class File {

private:
  //--- PROPIEDADES DEL ARCHIVO ---
  fstream file; //Filestream del archivo
  string path; //Ruta del archivo que utilzará el File

  bool locked; //Si está bloqueado el archivo no se pueden añadir/modificar/eliminar campos

  int lastDeleted; //Índice del último registro borrado
  int recordSize; //Tamaño en bytes abarcado por un registro
  int metaSize; //Tamaño en bytes abarcado por el meta

  List<int> availList; //Espacios disponibles en el archivo
  List<Field> fields; //Campos del archivo actual


  //--- PROPIEDADES DEL BUFFER ---
  int blockSize; //Tamaño del buffer (o bloque)
  int currentBlock; //Bloque actual que el buffer está leyendo/escribiendo

  List<List<string>> recordBuffer; //Registros cargados en memoria


  //--- FUNCIONES DE APOYO ---
  bool buildAvailList(int); //Función recursiva que construye la lista de posiciones disponibles
  void calculateSizes(); //Calcula tamaños importantes como metaSize y recordSize
  int position(int); //Calcula la posición del registro en el índice proporcionado
  long filesize(); //Calcula el tamaño del archivo


public:
  //--- CONSTRUCTORES ---
  File(); //Inicializar sin ruta del archivo y valores por defecto
  File(string); //Inicializar con ruta del archivo y tamaño del bloque por defecto
  File(string, int); //Inicializar con ruta + tamaño del bloque proporcionado


  //--- FUNCIONES DE ARCHIVO ---
  void lock(); //Bloquear el archivo para prohibir cambios en los campos
  void setPath(string); //Proporcionar una nueva ruta de archivo
  bool open(); //Abir el archivo de path
  bool open(string); //Abrir el archivo en la ruta proporcionada
  void close(); //Cerrar el archivo actual


  //--- ESCRITURA DE METADATOS ---
  bool writeMeta(); //Llama a ambos métodos de escritura de metadatos
  bool writeAvailList(); //Escribir la última posición borrada (lastDeleted) al meta
  bool writeFields(); //Escribir la información de los campos de usuario al meta

  //--- LECTURA DE METADATOS ---
  bool readMeta(); //Llama a ambos métodos de escritura de metadatos
  bool readAvailList(); //Leer la última posición borrada (lastDeleted) del meta
  bool readFields(); //Leer la información de los campos de usuario del meta


  //--- FUNCIONES DE BUFFER ---
  bool addField(int, string, int, bool); //Añadir un nuevo campo [tipo, nombre, tamaño, isPrimaryKey]
  bool addField(int, string, int); //Añadir un nuevo campo [tipo, nombre, tamaño]
  bool addRecord(List<string>); //Añade un registro al buffer, toma una lista de strings como datos
  bool hasPrimaryKey(); //Retorna verdadero si existe un campo llave primaria en el archivo

  bool deleteField(int); //Borra un campo de la lista de campos (si no está bloqueado el archivo)
  bool deleteRecord(int); //Borra un registro (debe estar escrito en el archivo)

  bool replaceField(int, int, string, int); //Reemplaza el n-ésimo registro por uno nuevo [n, tipo, nombre, tamaño]
  bool replaceRecord(int, List<string>); //Reemplaza el n-ésimo registro escrito en el archivo

  bool flush(); //Escribe todos los registros del buffer al archivo

  bool seek(int); //Busca el n-ésimo bloque (n es el parámetro)
  bool next(); //Pasa al siguiente bloque
  bool previous(); //Retorna al bloque anterior
  bool seekFirst(); //Busca el primer bloque
  bool seekLast(); //Busca el último bloque
  bool tell(); //Retorna la posición del bloque actual

  List<List<string>> data(); //Retorna el bloque actual
  List<string> getRecord(int); //Retorna el n-ésimo registro


  //--- FUNCIONES DE INFORMACIÓN ---
  List<Field> getFields(); //Retorna fields
  List<Field>* getLocationFields();

  int fieldQuantity(); //Cantidad de campos en el archivo
  int recordQuantity(); //Cantidad de registros en el buffer
  int blockQuantity(); //Cantidad de bloques en el archivo
  int getRecordSize(); //Retorna recordSize
  int getMetaSize(); //Retorna metaSize
  int getCurrentBlock(); //Retorna el bloque actual
  int getBlockSize(); //Retorna el tamaño de bloque

  bool isLocked(); //Retorna locked


  // --- FUNCIONES DE EXPORTACIÓN ---
  void exportCSV(string);
  void exportXML(string);


  // --- OPERADORES ---
  operator bool(){ //Retorna falso si el archivo no está cargado.
    if (path == "") {
      return false;
    }

    return true;
  }

  //--- DESTRUCTOR ---
  ~File();

};

#endif
