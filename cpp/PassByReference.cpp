#include <iostream>

void testFunc(int &num){
  num += 10;
}

int main(int argc, char const *argv[]) {
  int num = 10;

  std::cout << "value before function call: " << num << std::endl;
  testFunc(num);
  std::cout << "value after function call: " << num << std::endl;

  std::cout << "current value of num: " << num << std::endl;
  return 0;
}
