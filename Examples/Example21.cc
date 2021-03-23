#include "Employee.h"
#include <string>
#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
  Emplyee Leslie("Leslie", "Kerby", 1000);
  cout << "Leslie's salary: " << Leslie.getSalary() << std::endl;
  Leslie.printEmployee();
  std::vector<Employee> staff{
    {"Leslie","Kerby",1000},
    {"Obvious","Artificial",20000},
    {"Fake","Name",1000},
    {"Alan","Turing",2000},
    {"Grace","Hopper",2000},
    {"Anita","Borg",2000}
  };
  stable_sort(begin(staff),end(staff));
  //sort(begin(staff),end(staff));
  return 0;
}
