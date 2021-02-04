#include "Person.h"
#include <iostream>

Person::Person(std::string first, std::string last, int arbitrary) : // Constructor implementation
  firstname(first), lastname(last), arbitrarynumber(arbitrary) // Constructor initializer
  {
    std::cout << "Constructing " << firstname << " " << lastname << std::endl;
  }

Person::~Person() // Destructor
{
  std::cout << "Destructing " << firstname << " " << lastname << std::endl;
}

int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
