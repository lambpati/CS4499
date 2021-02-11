// Example 10
// References and Pointers
// Patience Lamb

#include <iostream>
#include "Person.h"
using namespace std;

void change_x(int& x2) { x2 = 42;}

int main(int argc, char const *argv[]) {
  /* REFERENCES */
  int x = 5;
  cout << "x = " << x << endl;
  cout << "Address of x: " << &x << endl;
  int& xref = x;
  // You can use int & xref; I prefer int&; gives the value at certain reference
  // &xref gives address of xref
  cout << "xref = " << xref << endl;
  cout << "&xref = " << &xref << endl;
  xref = 7;
  int y = 31;
  // xref = &y;
  // Cannot change address
  cout<< "x = " <<x << endl;

  change_x(x); //int& x2 = x
  cout << "x = " << x << endl;
  xref = y;
  cout << "x = " << x << endl;
  // Can create a reference to an object
  Persion p1("Andres", "Sewell", 789);
  Person& p1ref = p1;
  cout << "p1ref: " << p1ref.getName() " " << p1ref.getNumber() << endl;


  cout << "\n \n";

  /* POINTERS */
  int* xptr = &x;
  cout << "Address of xptr = " << &xptr << endl;
  cout << "The value of xptr = " << xptr << endl;



  return 0;
}
