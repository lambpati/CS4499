// Example 2
// If, switch statements
// Patience Lamb

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]) {
  double x = 3.5;
  double y = 3.7;
  bool litmus;
  litmus = (y>4) && (x>4);
  cout << "\t litmus = \n" << litmus << endl;
  if (litmus) {
    cout << "x and y are greater than 4 \n";
  }
  else if (x>4) {
    cout << "x is greater than 4 \n";
  }
  else if (y>4) {
    cout << "y is greater than 4 \n";
  }
  else {
    cout << "x and y are less than or equal to 4 \n";
  }

  switch (litmus) {
    case 1:
      cout << "x and y are greater than 4 \n";
      break;
    case 0:
      cout << "x and y are both not greater than 4 \n";
      break;
    default:
    cout << "default executed \n";
    break;
  }

  while (x<10) {
    cout << "x = " << ++x << endl;
  }
  // Ctrl+C exits with an infinite loop
  // x++: executes statements then increments
  // ++x: increments then executes statements
  cout << "End of while loop. \n";
  do{
    cout << "x = " << ++x << endl;
  } while (x<10);

  for (int i = 0; i <= 20; i++) {
  // cout << "i = " << i << endl;
    if(i%100 == 0){
      //Do something every 100 times
      cout << "i = " << i << endl;
    }
  }
  return 0;
}
