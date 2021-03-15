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

  friend bool operator<(int i, Person const& p); // allows free function to access members

public:
  // Constructors
  Person(std::string, std::string, int arbitrary);
  Person(); // Default constructor
  // Methods
  std::string getName();
  int getNumber();

//Operator PersonOperatorOverloads
bool operator<(Person const& p) const;
bool operator<(int i) const;
};

//bool operator<(int i, Person const& p);
