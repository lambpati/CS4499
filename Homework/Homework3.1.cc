// Patience Lamb
// Homework 3.1
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Set the rn value to seed in a global sense
long rn = 101101;
// Create the normalized value in a global sense
float norm;

vector<int> bins(100,0);
// Make a pair of rn and norm to call later on
float randlcg(long g, long c, long p){
  rn = (g * rn + c) % p;
  norm = (float) rn/p;
  return norm;
}

long period(long g, long c, long p){
  long count = 0;
  while(rn != 101101){
    randlcg(g,c,p);
    count++;
  }
  return count;
}

int main(int argc, char const *argv[]) {
  long g = 61;
  long c = 1;
  long p =pow(2,24);

  float mean;

  // Number of random numbers to generate
  int number;
  float accumulator;

// Uncomment the value you would like to use for # of Random Numbers

  number = 100;
//  number = 10000;
//  number = 1000000;
//  number = 100000000;

  for (int i = 1; i <= number; i++) {
    norm = randlcg(g,c,p);
    int index = static_cast<int>(norm*100);
    bins.at(index)++;
    accumulator += norm;
  }
  mean = accumulator/number;


// Commenting this out for more concise output
//  for (int k = 0; k < bins.size(); k++){
//    cout << "Bin " << k << ":" << bins.at(k) << endl;
//  }
  cout << "Mean of " << number << " pseudorandom numbers: " << mean << endl;



  // If the LCG was a perfect pseudorandom number generator, the mean = 0.5
  // half way between the minimum value (0) and the maximum value (1) for all
  // values of numbers.

  // As the amount of random numbers generated increased, a more uniform
  // distribution was produced (the graphs created a "box" shaped graph).
  // A perfect pseudorandom number generator would create a uniform uniform
  // distribution with a few points or many points and would maintain the
  // distribution without repeating values.

  // Calculate the period of the LCG
  long periodf = period(g,c,p);
  cout << "The period is: " << periodf << endl;

  return 0;
}
