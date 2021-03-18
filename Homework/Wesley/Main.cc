#include "Rabbit.hh"
#include "Warren.hh"
#include <iostream>

int main(int argc, char const *argv[]) {
  std::vector<Rabbit> rabbits;
  Warren warren(rabbits);
  warren.initialize();
  int numberRounds = 0;
  while (!warren.getAllBunnies().empty()) {
      numberRounds++;
      warren.begin(numberRounds);
  }

  return 0;
}
