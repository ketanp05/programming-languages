#include <iostream>
using namespace std;

class Collector{
private:
  int *list;
  int capacity;
  int size;

public:
  Collector(){
    size = 0;
    capacity = 0;
    list = nullptr;
  }
  Collector(int cap){
    capacity = cap;
    size = 0;
    int *list = new int[capacity];
  }

  bool append(int value){
    if(size < capacity){
      list[size++] = value;
      return true;
    }
    return false;
  }

  void displayList(){
    for(int i = 0; i < capacity; i++){
      cout << list[i] << " ";
    }
    cout << endl;
  }

  ~Collector(){
    cout << "deleting the object" << endl;
    if(capacity > 0){

      delete []list;
    }


  }

};

int main(int argc, char const *argv[]) {
  // Collector c(10); // allocated space for object in main memory

  Collector *c;
  c = new Collector(10);

  for(int i = 1; i< 12; i++){
    cout << c.append(i) << endl;
  }
  delete c; // In the case of object pointers, destructors are called when we issue the delete command
  cout << "Exiting program" << endl;
  return 0;
}
