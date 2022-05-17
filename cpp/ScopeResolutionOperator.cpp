#include <iostream>
using namespace std;

class Rectangle{
  int length, width;

public:
  // we only write the declaration here
  void setLength(int l);
  int getLength();

  void setWidth(int w);
  int getWirdth();

  int area();
};

// somewhere else in the code im defining the class functions
void Rectangle::setLength(int l){
  length = l;
}

int Rectangle::area(){
  return length*width;
}
