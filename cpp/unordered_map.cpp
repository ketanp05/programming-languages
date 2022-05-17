#include <iostream>
#include <unordered_map>
// using namespace std;

int main() {
    /*
    unordered_map is an associated container that stores elements formed by the combination of key-value 
    and a mapped value. The key value is used to uniquely identify the element and the mapped value is 
    the content associated with the key.
    */
	std::unordered_map<int, int> umap;
	
	// like a dictionary in python
	// key:value pair but not sorted
	umap[1] = 2;
	umap[2] = 2;
	umap[3] = 2;
	
	
	// key, values will print randomly
	// auto means x in umap can be of any data type, auto handles that for you
	for(auto x : umap){
	    std::cout << x.first << ":" << x.second << std::endl;
	}
	
	return 0;
}
