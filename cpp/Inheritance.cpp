#include <iostream>
using namespace std;

class Vehicle{
private:
  string color;
  string model;
  int year;

public:
  Vehicle(){
    color = "";
    model = "";
    year = 0;
  }

  Vehicle(string col, string mod, int yr){
    color = col;
    model = mod;
    year = yr;
  }

  void printDetails(){
    cout << "color: " << color << endl;
    cout << "year: " << year << endl;
    cout << "model: " << model << endl;
  }
};

class Car : public Vehicle{
private:
  int trunk_size;

public:
  Car(){
    trunk_size = 0;
  }

  Car(string col, string mod, int yr, int ts) : Vehicle(col, mod, yr){
    trunk_size = ts;
  }

  void carDetails(){
    printDetails();
    cout << "trunk size: " << trunk_size << endl;
  }
};

class Ship : public Vehicle{
private:
  int anchors;

public:
  Ship(){
    anchors = 0;
  }

  Ship(string col, string mod, int yr, int anc) : Vehicle(col, mod, yr){
    anchors = anc;
  }

  void shipDetails(){
    printDetails();
    cout << "no of anchors: " << anchors << endl;
  }
};

int main(int argc, char const *argv[]) {
  Car c("red", "mercedes", 2012, 57);
  c.carDetails();

  cout << endl;

  Ship s("white", "colossal", 2019, 5);
  s.shipDetails();
  return 0;
}
