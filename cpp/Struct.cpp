#include <iostream>
using namespace std;

struct Student{

  string name;
  int age;
  int marks;
};

/*
  print information of the student
*/
void printData(Student s){
  cout << "Information:" << endl;
  cout << "Name = " << s.name << endl;
  cout << "Age = " << s.age << endl;
  cout << "Marks = " << s.marks << endl;
}

/*
  return a structure from a function
  studentInfo is just a normal function of type Student
*/
Student studentInfo(string name, int age, int marks){
  Student studentObj;
  studentObj.name = name;
  studentObj.age = age;
  studentObj.marks = marks;
  return studentObj;
}

int main(int argc, char const *argv[]) {
  Student s1, s2, s3, s4;

  // array of structures
  Student students[100];
  students[0] = {"ketan patil", 23, 97};
  // students[1] = {"jim halpert", 54, 48};
  // students[2] = {"andy bernard", 32, 92};

  // pass structure variable name to the function
  students[0] = studentInfo("jim halpert", 54, 48);
  printData(students[0]); // this will print information of student: jim halpert
  
  students[1] = studentInfo("andy bernard", 32, 92);
  printData(students[1]);

  // initializing members in one line
  s1 = {"David Blake", 12, 70};
  s2 = {"John Doe", 15, 89};
  s3 = {"Sara Jane", 14, 99};
  // you can also initialize in the following way
  s4.name = "Janet Alex";
  s4.age = 17;
  s4.marks = 77;

  return 0;
}
