#include <iostream>

int main(int argc, char const *argv[]) {
  int x = 10;
  std::cout << "call ++x: " << ++x << std::endl; // return value of x+1
  std::cout << "call x: " << x << std::endl; // now x value is x+1
  // std::cout << x++ << std::endl; // returns value of x
  // std::cout << x << std::endl; // now x value of x+1
  // std::cout << x << std::endl; // now x is x+1 right

  // int y = 10;

  return 0;
}
