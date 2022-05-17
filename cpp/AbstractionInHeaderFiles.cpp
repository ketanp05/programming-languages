/*
main.cpp: all implementation details hidden from the user
circle.h: declarations of class and required functions
circle.cpp: definitions of functions declared in the header file
*/

/*
circle.h

// These commands tell the compiler that this header file can be used in multiple places. The #ifndef command ends with #endif.
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
private:
  double radius;
  double pi;

public:
  Circle();
  Circle(double r);
  double area();
  double perimeter();
};
*/

/*
circle.cpp

#include "circle.h"
using namespace std;

Circle :: Circle(){
  radious = 0;
  pi = 3.14;
}

Circle :: Circle(double r){
  radius = r;
}

double Circle :: area(){
  return pi*radius*radius;
}

double Circle :: perimeter(){
  return 2*pi*radius;
}
*/

/*
main.cpp

#include<iostream>
#include "./Circle.h" // or #include "Circle.h"

int main(int argc, char const *argv[]) {
  Circle c(20);

  cout << "area: " << c.area() << endl;
  cout << "perimeter: " << c.perimeter() << endl;

  return 0;
}
*/
