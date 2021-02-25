#include <iostream>

int main(int argc, char const *argv[]) {
  int x;
  int y;
  int* p1;

  p1 = &x;
  *p1 = 99;

  std::cout << "Value of x: " << x << '\n';
  std::cout << "Value of p1: " << p1 << '\n';

  p1 = &y;
  *p1 = -300;

  std::cout << "Value of y: " << y << '\n';
  std::cout << "Value of p1: " << p1 << '\n';
  return 0;
}
