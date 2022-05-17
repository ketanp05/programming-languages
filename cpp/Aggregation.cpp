#include <iostream>
#include <string>
using namespace std;

class Country{
  string name;
  int population;

  public:
  Country(string n, int p){
    name = n;
    population = p;
  }
  string getName(){
    return name;
  }
};

class Person {
  string name;
  Country* country; // A pointer to a Country object

  public:
  Person(string n, Country* c){
    name = n;
    country = c;
  }

  string printDetails(){
    cout << "Name: " << name << endl;
    cout << "Country: " << country->getName() << endl;
  }
};

int main() {
  Country* country = new Country("Utopia", 1);
  {
    Person user("Darth Vader", country);
    user.printDetails();
  }
  // The user object's lifetime is over

  cout << country->getName() << endl; // The country object still exists!
}

// As we can see, the country object lives on even after the user goes out of scope. This creates a looser relationship between the two in comparison to composition.
