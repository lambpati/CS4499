// Example 3
// Functions
// Patience Lamb

#include <iostream>
#include <cmath>
using namespace std;

double power(double b,int exp){
  double res = 1;
  for (int i=1; i<=exp; i++){
    res *= b;
  }
  return res;
}

int main(int argc, char const *argv[]) {
  int base = 2;
  int exponent = 3;
  int result = 1;
  for (int i=1; i<=exponent; i++){
    result *= base;
  }
  cout << base << "^"  << exponent << "=" << result << endl;

  base = 5;
  exponent = 10;
  result = 1;
  for (int i=1; i<=exponent; i++){
    result *= base;
  }
  cout << base << "^"  << exponent << "=" << result << endl;

  cout << power(base,exponent) << endl; // Actually works C++ converts int to double

  return 0;
}
