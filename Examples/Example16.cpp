#include <random>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  random_device rd;
  mt19937 generator(rd()); // is an LCG by default
  uniform_int_distribution<int> dist(0,100);

  for(int i = 0; i < 1000000; i++){
    int num = dist(generator);
    if (num%100 == 0){
      std::cout << num << '\n';
    }
  }
  return 0;
}
