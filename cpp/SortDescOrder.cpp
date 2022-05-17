#include <iostream>
using namespace std;

void sort_desc(int arr[], int size){
  for(int i = 0; i < size; i++){
    for(int j = i+1; j < size; j++){
      if(arr[i] < arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int display(int arr[], int size){
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
}

int main(int argc, char const *argv[]) {

  int arr[] = {2,9,1,7,13};
  int size;
  size = sizeof(arr)/sizeof(int);

  sort_desc(arr, size);
  display(arr, size);
  return 0;
}
