// Example 11
// const
// Patience Lamb

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int i = 3;
  int const CI = 3;
  i = 4;
  // CI = 4; //Cannot do this

  int& ri = i;
  ri = 5;
  int const& cri = i;
  // cri = 6; // cannot do this
  

  return 0;
}
