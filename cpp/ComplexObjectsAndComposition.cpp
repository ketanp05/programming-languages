// https://www.geeksforgeeks.org/introduction-to-complex-objects-and-composition/

#include <iostream>
using namespace std;

class Engine{
private:
  int capacity;

public:
  Engine(){
    capacity = 0;
  }
  Engine(int cap){
    capacity = cap;
  }

  void EngineDetails(){
    cout << "Capacity of the engine: " << capacity << endl;
  }

};

class Doors{
private:
  int no_of_doors;

public:
  Doors(){
    no_of_doors = 0;
  }
  Doors(int doors){
    no_of_doors = doors;
  }

  void DoorDetails(){
    cout << "Door details: " << no_of_doors << endl;
  }
};

class Tyres{
private:
 int no_of_tyres;

public:
  Tyres(){
    no_of_tyres = 0;
  }
  Tyres(int tyres){
    no_of_tyres = tyres;
  }

  void TyreDetails(){
    cout << "Tyre details: " << no_of_tyres << endl;
  }

};

// We have created a Car class which contains the objects of Engine, Tyres and Doors classes. Car class owns the objects and is responsible for their lifetime.
// When Car dies, so does tyre, engine and doors too.
class Car{
private:
  Engine eobj;
  Tyres tobj;
  Doors dobj;
  string color;

public:
  // constructor initialization list
  Car(Engine eng, Tyres tyr, Doors drs, string col) : eobj(eng), tobj(tyr), dobj(drs){
    color = col;
  }

  void CarDetails(){
    eobj.EngineDetails();
    tobj.TyreDetails();
    dobj.DoorDetails();
    cout << "Color of the car: " << color << endl;
  }

};

int main(int argc, char const *argv[]) {
  Engine eobj(1500);
  Tyres tobj(4);
  Doors dobj(4);

  Car cobj(eobj, tobj, dobj, "black");
  cobj.CarDetails();

  return 0;
}
