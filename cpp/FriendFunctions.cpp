#include <iostream>
using namespace std;

class Rectangle{
private:
  int length, breadth;

public:
  Rectangle(){
    length = 0;
    breadth = 0;
  }

  Rectangle(int l, int b){
    length = l;
    breadth = b;
  }

  int areaRectangle(){
    return length*breadth;
  }


  // friend return_type name_of_func(param1, param2,...)
  // brefriends class Rectangle
  // the Ball object is being passed by reference to the friend function. This is a crucial step in the functionality of the friend.
  // If the object is not passed by reference, the changes made in the friend function will not work outside its scope. Basically, our object will not be altered
  friend void newValues(Rectangle &r, int l, int b);
};

// access to private members of the class Rectangle
// changing values of private members of the class
void newValues(Rectangle &r, int l, int b){
  r.length = l;
  r.breadth = b;
}

int main(int argc, char const *argv[]) {
  Rectangle r(10,20);
  cout << "area: " << r.areaRectangle() << endl;

  newValues(r, 30, 40);
  cout << "new area: " << r.areaRectangle() << endl;
  return 0;
}
