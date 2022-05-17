#include <iostream>
using namespace std;

void deleteElementFromArray(int *&ArrayPtr, int size, int index){
  int *ArrayPtrNew = new int[size-1];


  // delete element from array = place all elements in a new array except the number to be deleted
  for(int i = 0; i < size-1; i++){
    if(i == index || i > index){
      //break;
      ArrayPtrNew[i] = ArrayPtr[i+1];
    }else{
      ArrayPtrNew[i] = ArrayPtr[i];
    }
  }

  //delete previous ArrayPtr
  delete []ArrayPtr;
  ArrayPtr = ArrayPtrNew;
}


int main(int argc, char const *argv[]) {

  int size;
  cout << "enter size: " << endl; cin >> size;
  int *ArrayPtr = new int[size];

  for(int i = 0; i < size; i++){
    ArrayPtr[i] = i;
  }

  int index;
  cout << "enter index of element to be deleted: " << endl; cin >> index;

  deleteElementFromArray(ArrayPtr, size, index);

  for(int i = 0; i<size-1 ; i++){
    cout << ArrayPtr[i] << " ";
  }
  cout << endl;

  return 0;
}
