#include "Record.h"

Record::Record(){

}

Record::Record(List<string> nData){
  data = nData;
}

int Record::size(){
  return data.size;
}
