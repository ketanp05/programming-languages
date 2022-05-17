#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int size = 5;
  int *DynamicArray = new int[size]; // allocation - will store starting of allocated space in pointer DynamicArray

  // for(int i = 0; i < size; i++){
  //   cin >> DynamicArray[i];
  // }

  /*
  char* c = new char[length];
  std::fill_n(c,length,0);
  */

  fill_n(DynamicArray, size, 2); // fill array with 2

  for(int i = 0; i < size; i++){
    cout << DynamicArray[i] << endl;
  }

  delete []DynamicArray; // deallocation - Deletes a memory allocated to dynamic array
  return 0;
}
