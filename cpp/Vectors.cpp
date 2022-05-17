#include <iostream>
#include <vector>

/*
vectors act like dynamic arrays
no need to declare size

sequential containers:
Array	Vector	Deque	List	Forward List
*/

/*
int main(int argc, char const *argv[]) {
  // static allocation
  std::vector<int> v;

  for(int i = 0; i < 10; i++){
    std::cout << "capacity: " << v.capacity() << std::endl; // check capacity before entering/capacity is total space in vector
    std::cout << "size:  " << v.size() << std::endl; // now check size
    v.push_back(i+1); // fill 1 to 10 nos in v
  }

  // dynamic allocaiton, here make sure you delete it later in the program
  // std::vector<int>* vp = new vector<int>();
  
  // initialize vector with some elements
  //   vector<int> vect{ 10, 20, 30 };
  //     for (int x : vect)
  //         cout << x << " ";


  // push_back will double the size once the initial size/internally allocated size is reached.
  v.push_back(10); // adds element at the end of vector, since vector initially empty this added element is the first one
  v.push_back(20); // gets added after first element from end
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);

  // dont use v[i] for inserting elements

  // what is the element at the position i/ v.at(index) gives you element at that index
  std::cout << v.at(3) << std::endl; // much safer than going for v[i] where i is a number greater than the size of the element

  // size of the vector
  std::cout << "size: " << v.size() << std::endl;

  std::cout << v[0] << std::endl; // print first element of the vector v, you can treat vector as array while printing

  // dlete the last element
  v.pop_back(); // will delete 50

  for(int i = 0; i < v.size(); i++){
    std::cout << v[i] << std::endl;
  }

  return 0;
}
*/

int main(int argc, char const *argv[]) {
  std::vector<int> v;

  v.push_back(0);
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  std::cout << "print vector normally" << std::endl;
  for(int i = 0; i < v.size(); i++){
    std::cout << v[i] << std::endl;
  }// 0123

  std::cout << "print vecotr using at()" << std::endl;
  for(int i = 0; i < v.size(); i++){
    std::cout << v.at(i) << std::endl;
  }

  // using an iterator
  // iterator it is a pointer, will need to dereference in order to print value
  // iterator can be for a map, set, vector etc
  std::cout << "print vector using iterator" << std::endl;
  std::vector<int>::iterator it;
  for(it = v.begin(); it != v.end(); it++){
    std::cout << *it << std::endl;
  }

  std::cout << "print vector using for each loop" << std::endl;
  // auto keyword wil tell compiler that it is adaptable and does not care about type
  for(auto element:v){ // element will contain every number in vector v
    std::cout << element << std::endl;
  }

  std::cout << std::endl;   

  // std::std::vector<int> v(size_of_the_vector, what_element_you_want_inside_vector);
  std::vector<int> v2(4, 10); // 10 10 10 10 is v2
  std::cout << "vector v2: " << std::endl;
  it = v2.begin();

  // vector.insert(where, no_of_copies, element);
  v2.insert(it+1, 332); // will add 332 before position 2 in vector v2; // add element before the specified position
  for(it = v2.begin();it != v2.end(); it++){
    std::cout << *it << std::endl;
  }

  return 0;
}
