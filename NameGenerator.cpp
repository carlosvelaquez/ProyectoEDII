#include "NameGenerator.h"

NameGenerator::NameGenerator(){
  firstNames.clear();
  lastNames.clear();
  citySuffixes.clear();
}

void NameGenerator::load(){
  firstNames.clear();
  lastNames.clear();
  citySuffixes.clear();

  firstNames.insert("Carlos");
  firstNames.insert("Leonardo");
  firstNames.insert("Daniel");
  firstNames.insert("David");
  firstNames.insert("Diego");
  firstNames.insert("Enrique");
  firstNames.insert("Erick");
  firstNames.insert("Francisco");
  firstNames.insert("Gerardo");
  firstNames.insert("Iliana");
  firstNames.insert("Josue");
  firstNames.insert("Luis");
  firstNames.insert("Mary");
  firstNames.insert("Melvin");
  firstNames.insert("Michael");
  firstNames.insert("Michell");
  firstNames.insert("Ricardo");
  firstNames.insert("Richard");
  firstNames.insert("Omar");
  firstNames.insert("Osman");
  firstNames.insert("Reynod");
  firstNames.insert("Laura");
  firstNames.insert("Tania");
  firstNames.insert("Miguel");
  firstNames.insert("Andrea");
  firstNames.insert("Lester");
  firstNames.insert("Jean Carlo");
  firstNames.insert("Danilo");
  firstNames.insert("Nohelia");
  firstNames.insert("Franklin");
  firstNames.insert("Dennis");
  firstNames.insert("Ingrid");
  firstNames.insert("Alex");
  firstNames.insert("Leandro");
  firstNames.insert("Alejandra");
  firstNames.insert("Marcela");
  firstNames.insert("Ana");
  firstNames.insert("Oswaldo");
  firstNames.insert("Juan Luis");
  firstNames.insert("Carl");
  firstNames.insert("Elne");
  firstNames.insert("Manuel");
  firstNames.insert("Esteban");
  firstNames.insert("Elmer");
  firstNames.insert("Elver");

  lastNames.insert("Grote");
  lastNames.insert("Velásquez");
  lastNames.insert("Galarga");
  lastNames.insert("Gotas");
  lastNames.insert("Cenario");
  lastNames.insert("Curio");
  lastNames.insert("Homero");
  lastNames.insert("Icrismas");
  lastNames.insert("Nano");
  lastNames.insert("Varela");
  lastNames.insert("Villela");
  lastNames.insert("Rodriguez");
  lastNames.insert("Borjas");
  lastNames.insert("Suazo");
  lastNames.insert("Mendoza");
  lastNames.insert("Matamoros");
  lastNames.insert("Galeano");
  lastNames.insert("Martínez");
  lastNames.insert("Santos");
  lastNames.insert("Portillo");
  lastNames.insert("Pinto");
  lastNames.insert("Gonzalez");
  lastNames.insert("Sánchez");
  lastNames.insert("Luque");
  lastNames.insert("Vargas");
  lastNames.insert("Andino");
  lastNames.insert("Ordoñez");
  lastNames.insert("Padgett");
  lastNames.insert("Parker");
  lastNames.insert("Figueroa");
  lastNames.insert("Mejía");
  lastNames.insert("Bocanegra");
  lastNames.insert("López");
  lastNames.insert("Grito");
  lastNames.insert("Escobar");
  lastNames.insert("Soto");
  lastNames.insert("Sosa");
  lastNames.insert("Euceda");
  lastNames.insert("Nuñez");
  lastNames.insert("Chirinos");
  lastNames.insert("Rovelo");
  lastNames.insert("Tabora");
  lastNames.insert("Galo");
  lastNames.insert("Rojas");
  lastNames.insert("Gómez");
  lastNames.insert("Kempe");
  lastNames.insert("Guevara");

  citySuffixes.insert("polis");
  citySuffixes.insert(" City");
  citySuffixes.insert(" Town");
  citySuffixes.insert("ar");
  citySuffixes.insert("land");
}

void NameGenerator::unload(){
  firstNames.clear();
  lastNames.clear();
  citySuffixes.clear();
}

string NameGenerator::generate(int mode){
  if (mode == 1) {
    return string(firstNames[(rand() % firstNames.size) + 1] + " " + lastNames[(rand() % lastNames.size) + 1]);
  }else{
    if (rand()%2 == 0) {
      return string(firstNames[(rand() % firstNames.size) + 1] + citySuffixes[(rand() % citySuffixes.size) + 1]);
    }else{
      return string(lastNames[(rand() % lastNames.size) + 1] + citySuffixes[(rand() % citySuffixes.size) + 1]);
    }
  }
}
