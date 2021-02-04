#pragma once
// Only include this once
#include <string>

class Person
{
private:
  // Attributes/characteristics
  std::string firstname;
  std::string lastname;
  int arbitrarynumber;

public:
  // Constructors
  Person(std::string first, std::string last, int arbitrary);
  Person(); // Default constructor
  // Destructor
  ~Person();
  // Methods
  std::string getName();
  int getNumber();
}