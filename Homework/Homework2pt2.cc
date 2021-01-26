// Homework 2 pt 2
// Patience Lamb

#include <iostream>
#include <cmath>
using namespace std;

long randlcg(long g, long c, long p, long rn){
  rn = (g * rn + c) % p;
  return rn;
}

float norm(long p, long rn){
  float norm;
  norm = rn/p;
  return norm;
}

int main(int argc, char const *argv[]) {
  int g = 61;
  int c = 1;
  long p = pow(2,24);
  long rn = 101101;
  float normalized = 0;

  for (int i = 1; i <= 30; i++) {
    rn = randlcg(g,c,p,rn);
    normalized = norm(p,rn);
    cout << "Random number " << i <<": " << normalized << endl;
  }
  return 0;
}
