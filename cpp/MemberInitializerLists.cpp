#include <iostream>
#define PI 3.141
using namespace std;

class Sphere{
private:
  const double density;
  double radius;

public:
  //
  // Sphere(double myR){
  //   radius = myR;
  // }
  // // or
  // Sphere(double radius){
  //   this->radius = radius;
  // }
  // we can avoid the above by following the below concept

  // member initializer lists
  /*
    One advantage of member initializer list is that it makes things compact. One no longer has to use assignment statements in the constructor.
    Another important point is that any const class members can’t be initialized inside a constructor and must be initialized using member initializer lists

    syntax:
    name_of_the_constructor(data_type name_of_myvar) : name_of_class_var(name_of_myvar), name_of_class_var(name_of_myvar), ....{
      // implementation
    }
  */
  Sphere(double r) : radius(r), density(4.3){

  }

  double volume(){
    return 4 * PI * radius * radius * radius / 3;
  }

  double mass(){
    return density * volume();
  }
};

int main(int argc, char const *argv[]) {
  Sphere s(3.2);
  cout << "volume: " << s.volume() << endl;
  cout << "mass: " << s.mass() << endl;
  return 0;
}
