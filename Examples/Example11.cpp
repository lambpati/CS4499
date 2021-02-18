// Example 11
// const
// Patience Lamb

#include <iostream>
using namespace std;

/* int DoubleIt(int& x){
  x = x*2;
  return x;
} */

int DoubleIt(int const& x){
  //x = x*2;
  return x*2;
}

int main(int argc, char const *argv[]) {
  int i = 3;
  int const CI = 3;
  i = 4;
  // CI = 4; //Cannot do this

  int& ri = i;
  ri = 5;
  int const& cri = i;
  // cri = 6; // cannot do this

  // int& rCI = CI;
  int& const rCI = CI;
  int j = 10;
  int doubleJ =  DoubleIt(j);
  cout << "doubleJ: " << doubleJ << endl;
  cout << "j: " << j << endl;

  return 0;
}
