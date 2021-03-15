// Example 18
// Algorithms: count, count_if

#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> v{2,7,1,6,2,-2,3,0, -3, -5};


  // count
  //count (beginning iterator, ending iterator, target-value to match)
  //first old way
  int twos = 0;
  int const target = 2;
  for(size_t i=0; i<v.size(); i++){
    if (v.at(i) == target) twos++;

  }
  // size_t: type of unsigned int, chooses something large enough to hold the size
  // of the largest object your system could handle; use it instead of int when
  // describing the size of the something
  cout << "How many twos?" << twos << endl;
  twos = 0;
  // the count way
twos =  count(v.begin(), v.end(), target);
twos = count(begin(v), end(v), target);
cout << "How many twos?" << twos << endl;
cout << "How many 7s?" << cout(begin(v), end(v), 7) << endl;

// count_if
//count_if(begin iter,end iter,function returning bool)
// Count how many are odd
// first old way
int odds = 0;
for(auto elem: v){
  if (elem % 2 != 0) odds++;

}
cout << "Number of odds: " << odds << endl;
odds = count_if(begin(v), end(v), [](auto elem){return(elem %2 != 0);});
  return 0;
}
