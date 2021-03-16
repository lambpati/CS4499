#include "Bunny.hh"
#include "Driver.hh"
#include <iostream>

Population::Population(std::vector<Bunny> bunny):
  bunnies(bunny){}
Population:Population(){}

void Population::addAYear(Bunny bunny){
  bunny.setAge(bunny.getAge()+1)
}

bool Population::isDead(Bunny bunny){
  if(bunny.getAge() >= 10 && bunny.isRMVB == 0){
      return 1;
  }
  else if(bunny.getAge() >= 50 && bunny.isRMVB == 1){
    return 1;
  }
  return 0;
}

void Population::kill(){
  for (size_t i = bunnies.begin(); i < bunnies.end(); i++){
    if(isDead(bunnies.at(i)) == 1){
      std::cout << "Bunny " << bunnies.at(i).getName() << " died at age " << bunnies.at(i).getAge() << '\n';
      bunnies.erase(i);
      i--;
    }
  }
}
