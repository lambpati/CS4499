// Patience Lamb
// Homework 3.1
#include <iostream>
#include <cmath>
using namespace std;

// Set the rn value to seed in a global sense
long rn = 101101;
// Create the normalized value in a global sense
float norm;

// Create the previous normalized value in a global sense
float prevnorm;

// Make a pair of rn and norm to call later on
pair<long,float> randlcg(long g, long c, long p, long rn){
  rn = (g * rn + c) % p;
  norm = (float) rn/p;
  return make_pair(rn, norm);
}

int main(int argc, char const *argv[]) {
  int g = 61;
  int c = 1;
  long p = pow(2,24);

  // Setting the initial seed normalized
  norm = rn/p;

  for (int i = 1; i <= 30; i++) {
    prevnorm =  norm;
    rn = randlcg(g,c,p,rn).first;
    norm = randlcg(g,c,p,rn).second;

    cout << "Random number " << i <<": " << norm << endl;
    cout << "Previous random number " << i-1 << ": " << prevnorm << endl;
  }
  return 0;
}
