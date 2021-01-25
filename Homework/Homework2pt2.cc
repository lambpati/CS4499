// Homework 2 pt 1
// Patience Lamb

#include <iostream>
#include <cmath>
using namespace std;

long randlcg(long g, long c, long p, long rn){
  rn = (g * rn + c) % p;
  return rn;
}
int main(int argc, char const *argv[]) {
  long g = 61;
  long c = 1;
  long p = pow(2,24);
  long seed = 101101;

  for (int i = 1; i <= 30; i++) {
    seed = randlcg(g,c,p,seed);
    cout << "Random number " << i <<": " << seed << endl;
  }
  return 0;
}
