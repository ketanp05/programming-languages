#include <iostream>
using namespace std;

class A{
private:
  int x,y,z;

public:
  A(){
    x = 0;
    y = 0;
  }

  // Sometimes it is useful for a constructor to be able to call another constructor of the same class. This feature, called Collector Delegation
  A(int z) : A() {
    this->z = z;
  }

  void printValues(){
    cout << x << " " << y << " " << z << " " << endl;
  }
};


int main(int argc, char const *argv[]) {
  A aObj(3);
  aObj.printValues();
  return 0;
}
