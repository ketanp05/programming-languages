#include <iostream>

// The library containers like iterators and algorithms are examples of generic programming and have been developed using template concept

/*
template <typename T>
ret_type func_name(parameter_list)
{
    // body of function.
}
*/

// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
template <typename T>
T MaxOfTwo(T x, T y){ // return type is T cause x and y are of type t
  if(x > y){
    return x;
  }else{
    return y;
  }
}

int main(int argc, char const *argv[]) {
  std::cout << MaxOfTwo<int>(3, 7) << std::endl;  // Call MaxOfTwo for int
  std::cout << MaxOfTwo<double>(3.0, 7.0) << std::endl; // call MaxOfTwo for double
  std::cout << MaxOfTwo<char>('g', 'e') << std::endl;   // call MaxOfTwo for char
  return 0;
}

/*
#include <iostream>
using namespace std;

template<class T>
T add(T &a,T &b)
{
    T result = a+b;
    return result;

}
int main()
{
  int i =2;
  int j =3;
  float m = 2.3;
  float n = 1.2;
  cout<<"Addition of i and j is :"<<add(i,j);
  cout<<'\n';
  cout<<"Addition of m and n is :"<<add(m,n);
  return 0;
}
*/
