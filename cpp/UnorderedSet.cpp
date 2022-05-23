// C++ program to find duplicate from an array using
// unordered_set
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Print duplicates in arr[0..n-1] using unordered_set
void printDuplicates(vector<int> &arr)
{
	// declaring unordered sets for checking and storing
	// duplicates
	unordered_set<int> intSet;
	unordered_set<int> duplicate;

	// looping through array elements
	for (int i = 0; i < arr.size(); i++)
	{
		// if element is not there then insert that
		if (intSet.find(arr[i]) == intSet.end())
			intSet.insert(arr[i]);

		// if element is already there then insert into
		// duplicate set
		else
			duplicate.insert(arr[i]);
	}

	
	unordered_set<int> :: iterator itrbegin;
	itrbegin = duplicate.find(1);
	cout << "iterator begin: " << *(itrbegin) << endl;


    // printing the result
	cout << "Duplicate item are : ";
	unordered_set<int> :: iterator itr;
	
	// iterator itr loops from begin() till end()
	for (itr = duplicate.begin(); itr != duplicate.end(); itr++)
		cout << *itr << " ";
}

// Driver code
int main()
{
// 	int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
// 	int n = sizeof(arr) / sizeof(int);

    vector<int> arr = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};

	printDuplicates(arr);
	return 0;
}
