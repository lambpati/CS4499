// Homework 2 pt 1
// Patience Lamb

#include <iostream>
#include <cmath>
using namespace std;

double washer(float r1, float r2, float h){
  // r1 is the inner radius
  // r2 is the outer radius
  // h is the height
  double volume = M_PI * (pow(r2,2)- pow(r1,2)) * h;
  return volume;
}
int main(int argc, char const *argv[]) {
  float r1 = 0;
  float r2 = 0;
  float h = 0;
  cout << "Enter inner radius: ";
  cin >> r1;
  cout << "Enter outer radius: ";
  cin >> r2;
  cout << "Enter height: ";
  cin >> h;
  std::cout << "Volume is: "<< washer(r1,r2,h) << '\n';
  return 0;
}
