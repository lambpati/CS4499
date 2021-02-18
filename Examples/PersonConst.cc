#include "PersonConst.hh"
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

std::string Person::getName() const{ //These need to be in the cc file, not hh
  return firstname + lastname;
}
