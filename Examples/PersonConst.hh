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
  std::string getName() const; //Const after method name to indicate method is constant, not the return type.
  int getNumber() const;
  void setNumber(int); //Do not declare setter method const;
};
