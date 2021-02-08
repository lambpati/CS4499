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
float randlcg(long g, long c, long p){
  rn = (g * rn + c) % p;
  norm = (float) rn/p;
  return norm;
}

float mean(){
  float mean = (norm-prevnorm)/2;
  return mean;
}

int main(int argc, char const *argv[]) {
  int g = 61;
  int c = 1;
  long p = pow(2,24);

  // Setting the initial seed normalized
  norm = rn/p;
  prevnorm = rn/p;

  for (int i = 1; i <= 30; i++) {
    prevnorm =  norm;
    norm = randlcg(g,c,p);

    cout << "Random number " << i <<": " << norm << endl;
    cout << "Previous random number " << i-1 << ": " << prevnorm << endl;
    cout << "Working mean: " << i << ": " << mean << endl;
  }
  cout << "Mean: " << mean << endl;
  return 0;
}
