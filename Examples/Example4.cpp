// Example 4
// More functions
// Patience Lamb

#include <iostream>
using namespace std;

int numCalls=0;

unsigned long int factorial_forloop(int n){
  unsigned long int fact = 1;
  for(int i=n; i>0; i--){
    fact *= i;
  }
  return fact;
}

unsigned long int factorial_recursion(int n){
//Dont define numCalls here to avoid local
  static int numC;
  numCalls++;
  if(n == 1){
    return 1;
  } else{
    return n*factorial_recursion(n-1);
  }
}

unsigned long int factorial_recursion(int n, int &num){
  num++;
  if(n == 1){
    return 1;
  } else{
    return n*factorial_recursion(n-1, num);
  }
}

//n! = n*(n-1)*(n-2)*...*1
//0!=1

int main(int argc, char const *argv[]) {
  int x;
  int num = 0;
  cout << "Give me an integer: ";
  cin >> x;
  cout << "Factorial of " << x << " = " << factorial_forloop(x) << endl;
  cout << "Factorial of recursion " << x << " = " << factorial_recursion(x) << endl;
  cout << "Factorial of recursion (overloaded) " << factorial_recursion(x,num) << '\n';
  cout << "Number of calls: " << num << '\n';
  cout << "Memory address of x: " << &x << endl;

  //Find processor time
  float y;
  clock_t time_total;

  //Time using pow functions
  time_total = clock();
  for (int i = 0; i < 100000000; i++) {
    y = pow(i,5);
  }
  time_total = clock() -time_total;
  std::cout << "Using pow(): " << time_total/CLOCKS_PER_SECOND << "seconds" << '\n';

  //Time using multiplication functions
  for (int i = 0; i < 100000000; i++) {
    y = i*i*i*i*i;
  }
  time_total = clock() -time_total;
  std::cout << "Using multiplication: " << time_total/CLOCKS_PER_SECOND << "seconds" << '\n';



//Time for factorial_forloop
  for (int i = 0; i < 100000000; i++) {
    factorial_forloop(20)
  }
  time_total = clock() -time_total;
  std::cout << "Using for loop: " << time_total/CLOCKS_PER_SECOND << "seconds" << '\n';


  //Time for factorial_recursion
  for (int i = 0; i < 100000000; i++) {
    factorial_recursion(20)
  }
  time_total = clock() -time_total;
  std::cout << "Using recusion: " << time_total/CLOCKS_PER_SECOND << "seconds" << '\n'
    return 0;
}
