// Wesley Yockey
// homework 2

#include <iostream>
#include <cmath>

// This Function is made to calculate the volume of the washer as is asked problem one
double washervol(double outerR , double innerR ,double high) {
  double bigcirc = M_PI * pow(outerR, 2);
  double smacirc = M_PI * pow(innerR, 2);
  double area = bigcirc - smacirc;
  double volume = area * high;
  return volume;
}

// This Function is made to calculate the linear congruential pseudorandom number
// generator (LCG) as asked in problem two all values have been hard coded in as
// instructions do not state not to.
double randomlcg() {
  std::cout << "random number LCG executed";
  int seed = 101101;
  int g_mult = 61;
  int c_add = 1;
  long int p = pow(2,24);
  for (int i=0;i < 31; i++){
    seed = (g_mult * seed + c_add) % p;
    std::cout << i << ": " << seed << std::endl;
  }
  return seed;
}
int main() {
  std::cout << "Problem One asks for the demensions of a washer";
  double r1;
  double r2;
  double h;
  std::cout << "washer outer radius r1: ";
  std::cin >> r1;
  std::cout << "washer inner radius r2: ";
  std::cin >> r2;
  std::cout << "x: ";
  std::cin >> h;
  std::cout << "the volume of the washer described is: "<<washervol(r1, r2, h) << std::endl;
  std::cout << randomlcg();
  return 0;
}
