// Patience Lamb
// Example1.cpp

#include  <iostream> // preprocessor command, needed for cin and cout
#include <cmath> // pow() // math.h is the header file and more standard
using namespace std; // otherwise you have to type out std:cout and etc
// Don't use namespaces in more complicated code
// Don't use TABs; use spaces
int main() {
  int x = 0;
  int y = 0;
  double z = 0;
  const double pi = 3.14159;
  // Can't assign const variables (p1 += 1)
  cout << "Hello World!" << '\n';
  cout << "x: ";
  cin >> x;
  cout << x << endl; // If uou put in a float, C++ TRUNCATES in to an int
  // If you put in a string x will be a 0
  cout << int(42.675) << endl; // Same behaviour for type casting
  cout << "y: ";
  cin >> y;
  z = pi*pow(x,2);
  cout << "z = " << z << endl;
  return 0;
  // Never used y -- not good design: either use y or don't define and ask for it
}
