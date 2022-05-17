/* C++ code to demonstrate a 2D vector
with elements(vectors) inside it. */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	/*
	Below we initialize a 2D vector
	named "vect" on line 12 and then
	we declare the values
	*/

	vector<vector<int>> vect
	{
		{1, 2},
		{4, 5},
		{7, 8}
	};

  cout << "size:" << vect.size() << endl; 

	/*
	Now we print the values that
	we just declared on lines
6 using a simple
	nested for loop.
	*/

	for (int i = 0; i < vect.size(); i++)
	{
		for (int j = 0; j < vect[i].size(); j++)
		{
			cout << vect[i][j] << " ";
		}
		cout << endl;
	}

  // std::cout << vect[0] << std::endl;
  // std::cout << "last element: " << vect[2][2] << std::endl;

  for(vector<int>& v : vect){
    cout << v[0] << std::endl;
  }

	return 0;
}

/*
// 2d vector
#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
  std::vector<std::vector<int>> v{{1,2}, {3,4}, {5,6}};
  // v.push_back([1,2]);
  // v.push_back([3,5]);
  // v.push_back([7,8]);

  std::cout << "first element: " << v[0][0] << std::endl;
  std::cout << "last element: " << v[2][1] << std::endl;

  for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            std::cout << v[i][j] << " ";
        }
        std::cout << std::endl;
    }

  return 0;
}

*/
