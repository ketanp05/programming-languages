#include <iostream>

int main(int argc, char const *argv[]) {
  int arr[] = {0,2,3,4};
  int n = sizeof(arr)/sizeof(int);

  for(int i = 0; i < n; i++){
    std::cout << *(arr + i) << std::endl;
  }

  std::cout << arr << std::endl; // address of array arr
  std::cout << &arr[0] << std::endl; // address of arr

  std::cout << arr + 1 << std::endl; // address of second element of arr
  std::cout << &arr[1] << std::endl; // address of second element of arr

  int* AddrOfArr = NULL;
  AddrOfArr = arr;

  // std::cout << AddrOfArr++ << std::endl; // expecting is address of arr/first element of arr which is true
  // std::cout << *(AddrOfArr)++ << std::endl; // expecting value of first element of arr which is true
  std::cout << ++*(AddrOfArr) << std::endl; // expecting +1 of value of first elemtn of arr which is

  return 0;
}
