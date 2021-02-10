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
  Person(std::string, std::string, int arbitrary);
  Person(); // Default constructor
  // Destructor
  ~Person();
  // Methods
  std::string getName();
  int getNumber();
};
