/*
string substr (size_t pos, size_t len) const;
Parameters:
pos: Position of the first character to be copied.
len: Length of the sub-string.
size_t: It is an unsigned integral type.

Return value: It returns a string object.
*/

// #include <iostream>
// #include <string.h>
//
//
// int main(int argc, char const *argv[]) {
//   std::string s = "xxyy";
//   std::cout << substr(0,2); // string_var_name.substr(position, length) or string_var_name.substr(first index, last index)
//
//   return 0;
// }

// CPP program to illustrate substr()
#include <string.h>
#include <iostream>
// using namespace std;

int main()
{
	// Take any string
	std::string s = "dogcat";
  std::cout << s[s.length()-1] << std::endl;

	// Find position of ':' using find()
	// int pos = s.find(":");

	// Copy substring after pos
	std::string sub = s.substr(0,1); // sub = "dog"
  // string_var_name.substr(position, length) or string_var_name.substr(first index, last index)
  // wil not include the last index element

	// prints the result
	std::cout << "String is: " << sub;

	return 0;
}
