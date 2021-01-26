// Example 4
// More functions
// Patience Lamb

#include <iostream>
using namespace std;

unsigned long int factorial_forloop(int n){
  int fact = 1;
  for(int i=n; i>0; i--){
    fact *= i;
  }
  return fact;
}

unsigned long int factorial_recursion(int n){
  if(n == 1){
    return 1;
  } else{
    return n*factorial_recursion(n-1);
  }
}

//n! = n*(n-1)*(n-2)*...*1
//0!=1

int main(int argc, char const *argv[]) {
  int x;
  cout << "Give me an integer: ";
  cin >> x;
  cout << "Factorial of " << x << " = " << factorial_forloop(x) << endl;
  cout << "Factorial of recursion " << x << " = " << factorial_recursion(x) << endl;
  return 0;
}
