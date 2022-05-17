#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int *ptrvar = nullptr;
  int *ptrvar2 = nullptr;

  ptrvar = new int; // will store starting of allocated space in pointer ptrvar
  ptrvar2 = new int; // will store starting of allocated space in pointer ptrvar2



  *ptrvar = 10; *ptrvar2 = 20; // store 10 in that dynamic space

  // ptrvar1 = ptrvar2; // addr of ptrvar2 in ptrvar
  cout << *ptrvar << endl; // value // access the content of the dynamically allocated space by dereferencing
  cout << *ptrvar2 << endl;

  delete ptrvar;
  delete ptrvar2;

  // delete and reuse ptrvar
  int i = 100;
  ptrvar = &i;
  cout << "resued ptrvar:" << *ptrvar << endl;

  return 0;
}
