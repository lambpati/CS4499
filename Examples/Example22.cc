// Example 22
// Template functions

#include <string>
#include <iostream>
using namespace std;

template <class T>
T Max(T t1, T t2){
    return(t1 < t2) ? t2 : t1;
}

int main(int argc, char const *argv[]) {
  cout << "Max of 33 and 44: " << Max(33,44) << endl;
  string string1 = "Hello";
  string string2 = "World";
  cout << "Max of " << string1 << " and " << string2 << " is: " << Max(string1,string2) << endl;

  
  return 0;
}
