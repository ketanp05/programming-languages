#include <iostream>

class SomeType{
  public:

  // state the compiler generated default constructor
  SomeType() = default;

  // constructor for int
  SomeType(int value){
    std::cout << "SomeType(int) " << std::endl;
  };

  // explicit Copy Constructor
  // The explicit keyword is used in the copy constructor to avoid implicit conversions during copying.
  explicit SomeType(const SomeType&) = default;

  // virtual destructor
  // We need the virtual destructor in case there is a derived class inheriting SomeType.
  virtual ~SomeType() = default;

};

int main(){

  std::cout << std::endl;

  SomeType someType;
  SomeType someType2(2);
  SomeType someType3(someType2);

  std::cout << std::endl;

}
