#ifndef NAMEGENERATOR_H
#define NAMEGENERATOR_H

#include "List.h"
#include <string>

using namespace std;

class NameGenerator{

private:
  List<string> firstNames;
  List<string> lastNames;
  List<string> citySuffixes;

public:
  NameGenerator();
  void load();
  void unload();
  string generate(int);
};

#endif /* end of include guard: NAMEGENERATOR_H */
