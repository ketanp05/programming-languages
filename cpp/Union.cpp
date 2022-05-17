#include <iostream>
using namespace std;

union Value{
  // by default all members public
  int i;
  double d;
};

int main(int argc, char const *argv[]) {
  Value v = {23}; // now v holds an int
  cout << v.i << endl;

  v.d = 2323.55; // now v holds a double
  cout << v.d << endl;

  return 0;
}
