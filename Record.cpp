#include "Record.h"

Record::Record(){
  data.clear();
}

Record::Record(List<string> nData){
  data = nData;
}
