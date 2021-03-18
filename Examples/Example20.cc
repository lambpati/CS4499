// Example 20
// Accumulate

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> //Accumulate (and also inner product)

int main(int argc, char const *argv[]) {
  std::vector<int> a{1,2,3,4,5};
  std::vector<int> b(1,2,0,4);

  int total=0;
  for (auto i : a) {
    total += i;
  }
  std::cout << "Total of vector a: "<< total << std::endl;


  total =  accumulate(begin(a), end(a), 0);
  std::cout << "Total of vector a (accumulate): " << total << '\n';


  //Count only even numbers

  total = accumulate(begin(a),end(a),0, [](int total, int i){ if (i%2 == 0) return total + i;
  return total;})
  return 0;
}
