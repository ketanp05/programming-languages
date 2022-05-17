#include <iostream>
using namespace std;

/*
int main(int argc, char const *argv[]) {

  int i = 10;
  int *iPtr = nullptr;

  iPtr = &i;
  cout << iPtr << endl; //addr
  cout << *iPtr << endl; //value


  int j = 100;
  int &jRef =  j;
  cout << "jref:" << jRef << endl;

  return 0;
}
*/

void testFunc(int *value1, int *value2){
  cout << "addr of value1: " << value1 << endl; // address of var pointing to value1
  cout << "addr of value2: " << value2 << endl; // address of var pointing to value2
  cout << "value of value1: " << *value1 << endl; // value of var pointing to value1
  cout << "value of value2: " << *value2 << endl; // value of var pointing to value2

  int sum = 0; //to hold the sum of two vars
  sum = *value1 + *value2;

  // store sum in location pointed by value1
  *value1 = sum; // dereference value1 to get value and store sum in it, this will update value in value1 var/identifier location originally



  // store difference in location pointed by value2
  int diff = 0;
  if((*value1 - *value2) > 0){
    diff = *value1 - *value2;
  }else{
    diff = -(*value1 - *value2);
  }

  // store diff in location pointed by value2
  *value2 = diff; // dereference value2 to get value and store diff in it, this will update value in value2 var/identifier

  cout << "sum: " << *value1 << endl;
  cout << "diff: " << *value2 << endl;

}

int main(int argc, char const *argv[]) {
  int value1 = 10, value2 = 5;

  testFunc(&value1, &value2); // pass addresses of value 1 and 2


  return 0;
}
