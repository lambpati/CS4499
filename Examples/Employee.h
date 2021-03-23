#pragma once
#include <string>
#include <iostream>

class Employee{
  private:
    std::string firstname;
    std::string lastname;
    int salary;

  public:
    Employee(std::string first, std::string last, int sal):
      firstname(first), lastname(last), salary(sal){}

  //Methods
  int getSalary() const { return salary;}
  void printEmployee() const { std::cout << firstname << lastname << ", $"
                            << salary << std::endl;}

  bool operator<(Employee const& e) const {return this->salary < e.getSalary();}
  // Used for sorting
  
};
