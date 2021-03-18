#include "Bunny.hh"
#include "Driver.hh"
#include "Population.hh"
#include <iostream>

int main(int argc, char const *argv[]) {
  std::vector<Bunny> bunnies;
  Driver driver;
  Population population(bunnies, driver);
  population.initialize();
  int numberRounds = 0;
  while (!population.getAllBunnies().empty()) {
      numberRounds++;
      population.start(numberRounds);
  }

  return 0;
}
