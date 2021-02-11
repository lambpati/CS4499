// Example 9
// Enumerators
// Patience Lamb

#include "Enum.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  // Old enum;
  Status s = Pending;
  std::cout << "s = " << s << '\n';
  // Should static_cast for good form
  std::cout << "s = " << static_cast<int>(s) << '\n';
  s = Approved;
  std::cout << "s = " << static_cast<int>(s) << '\n';

  // New/Scoped enum
  FileError fe = FileError::notfound;
  //std::cout << "fe = " << fe << '\n'; // Will result in error
  std::cout << "fe = " << static_cast<int>(fe) << '\n';
  fe = FileError::ok;
  std::cout << "fe = " << static_cast<int>(fe) << '\n';

  NetworkError ne = NetworkError::disconnected;
  std::cout << "ne = " << static_cast<int>(ne) << '\n';
  return 0;
}
