#include <iostream>
using namespace std;

void meanFromArray(int *&ArrayPtr, int size){

  float mean = 0, stddev=0;
  int sum = 0;

  for(int i = 0; i < size; i++){
    sum += ArrayPtr[i];
  }
  mean = sum/size;
  cout << "mean: " << mean << endl;

}


int main(int argc, char const *argv[]) {

  int size;
  cout << "enter size: " << endl; cin >> size;
  int *ArrayPtr = new int[size];

  for(int i = 0; i < size; i++){
    ArrayPtr[i] = i;
  }

  meanFromArray(ArrayPtr, size);

  for(int i = 0; i<size; i++){
    cout << ArrayPtr[i] << " ";
  }
  cout << endl;
  delete []ArrayPtr;

  return 0;
}
