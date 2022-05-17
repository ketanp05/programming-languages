#include <iostream>
using namespace std;

struct Student{
  string name;
  int age;
};

int main(int argc, char const *argv[]) {
  struct Student s;
  struct Student *sptr;

  sptr = &s;

  // dereferencing to get access to Student
  // (*sptr).name = "ketan";
  // (*sptr).age = 32;

  // using arrow pointer
  sptr->name = "john doe";
  sptr->age = 32;

  cout << "Name: " << (*sptr).name << endl;
  cout << "Age: " << (*sptr).age << endl;
  return 0;
}
