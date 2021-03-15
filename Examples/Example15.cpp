// Example 15 Operator Overloads
#include "PersonOperatorOverloads.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  Person Leslie("Leslie", "Kerby", 123);
  Person Andres("Andres", "Sewell", 789);

  cout << "Leslie < Andres: " << ((Leslie < Andres) ? "True" : "False") << endl;
  cout << "Leslie < 300: " << ((Leslie < 300) ? "True" : "False") << endl;
    cout << "300 < Andres: " << ((300 < Leslie) ? "True" : "False") << endl;
  return 0;
}
