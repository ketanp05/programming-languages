#include <iostream>
using namespace std;

int main(){
  int decimal;
  cin >> decimal;
  int binary = 0;
  int remainder;
  int product = 1;

  while(decimal != 0){
    remainder = decimal % 2;
    binary = binary + remainder*product;
    product = product*10;
    decimal = decimal/2;

  }
  cout << binary << endl;
  return 0;
}
