#include <iostream>
using namespace std;

void testFunc(int *num){

  //int val = 12;
  //num = &val; // pointer reinitilized
  cout << "addr of num: " << num << endl;
  *num = *num + 10; // here we are dereferencing
  cout << "value of num inside the func: " << *num << endl;
}

int main(int argc, char const *argv[]) {

  int num = 5;
  cout << "value of num before func call: " << num << endl;

  testFunc(&num);// pass the address
  cout << "value of num after func call: " << num << endl;
  return 0;
}
