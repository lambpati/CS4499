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
  Person p1("Andres", "Sewell", 789);
  Person& p1ref = p1;
  cout << "p1ref: " << p1ref.getName() " " << p1ref.getNumber() << endl;


  cout << "\n \n";

  /* POINTERS */
  int* xptr = &x;
  cout << "Address of xptr = " << &xptr << endl;
  cout << "The value of xptr = " << xptr << endl;
  cout << "The value of x (deref of xptr) = " << *xptr << endl;
  (*xptr)++;
  cout << "Value of x now: " << *xptr << endl;
  cout << "X has changed: " << x << endl;
  *xptr++; // Be careful -- move pointers
  cout << "Address of xptr: " << xptr << endl;
  xptr = &y;
  cout << "Dereference xptr (value of y): " << *xptr << endl;

  vector<string> texts;
  texts.push_back("First");
  texts.push_back("Second");
  texts.push_back("Third");
  for(int i = 0; i < texts.size(); i++){
    cout << texts.at(i) << endl;
  }
  // Can also use a pointer
  string* textptr = &texts.at(0);
  cout << *textptr << endl;
  textptr++;
  cout << *textptr << endl;
  textptr++;
  cout << *textptr << endl;
// We dont know whel to stop (where the collection ends)
// This is similar to an iterator. We will talk about iterators later in class

// Now, pointers to objects
  Person* p1ptr = &p1;
  cout << "p1ptr: " << p1ptr << endl;
  cout << "p1ptr: " << (*p1ptr).getName() << " " << (*p1ptr).getNumber() << endl;
  // This is not how you should do it, but note that you need parenthesis
  // Otherwise it will call getName or getNumber for the reference in memory
  // Do it this way:
  cout << "p1ptr: " << p1ptr->getName() << " " << p1ptr->getNumber() << endl;
  // When you are calling methods on an object use the "." operator
  // When you are calling methods on a pointer, use the "->" operator
  int* badptr;
  *badptr = 3; //Goes to change the value pointed at, but its not pointing to anything
  cout << *badptr << endl;
  cout << badptr << endl; // Current C++ tries to fix this for you
  // but don't assume all compilers will act this way -- may segfault

  int* goodptr = nullptr;
  if(goodptr) {
    *goodptr = 3;
    cout << "goodptr: " << *goodptr << endl;

    // Always initializing and checking can be tedious, but it is usually done in
    // large codes to make sure you dont have a fatal crash
  }

  return 0;
}
