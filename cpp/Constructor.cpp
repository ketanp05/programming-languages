#include <iostream>
using namespace std;

class testClass{
  int a,b,c;

public:
  // default constructor
  testClass(){
    a = 0;
    b = 0;
    c = 0;
  }

  // parametrized constructor
  // here arguments do not have the same name as data members
  // testClass(int myA, int myB, int myC){
  //   a = myA;
  //   b = myB;
  //   c = myC;
  // }

  // we use "this" pointer in case of arguments having same name as class data members
  // We use the pointer when we have an argument which has the same name as a data member.
  //  this->memberName specifies that we are accessing the memberName variable of the particular class.
  testClass(int a, int b, int c){
    this->a = a;
    this->b = b;
    this->c = c;
  }


  // add 3 member variable
  int addVar(){
    return a+b+c;
  }
};

int main(int argc, char const *argv[]) {
  testClass tc(10, 11, 12); // object created with specified values
  cout << tc.addVar() << endl;
  return 0;
}
