#include "PersonOperatorOverloads.h"
#include <iostream>

Person::Person(std::string first, std::string last, int arbitrary) : // Constructor implementation
  firstname(first), lastname(last), arbitrarynumber(arbitrary) // Constructor initializer
  {
    std::cout << "Constructing " << firstname << " " << lastname << std::endl;
  }

//Operator Overloads
bool Person::operator<(Person const& p) const {
  return this->arbitrarynumber < p.arbitrarynumber; //left side is the left side of < in main case
}
bool Person::operator<(int i) const{
  return arbitrarynumber < i;
}

bool operator<(int i, Person const& p){ // can only do const on member function
  return i < p.arbitrarynumber; //abritrary number is private so cannot access directly
} // as p is const&, get number must be const or will error
// Can declare this function as a friend of Person, and then use arbitrarynumber (not preferred)
