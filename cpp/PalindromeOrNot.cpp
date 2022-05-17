// #include <iostream>
// using namespace std;
//
// int main(int argc, char const *argv[])
// {
//     int number;
//     cin >> number;
//     int num = number;
//
//     int remainder;
//
//
//     int result = 0;
//
//     while(number != 0){
//         remainder = number % 10;
//         result = result*10 + remainder;
//         number = number/10;
//     }
//
//     cout << "result: " << result << endl;
//     cout << "number: " << num << endl;
//
//     if(result == num){
//         cout << "is palindrome!" << endl;
//     }else{
//         cout << "not a palindrome!" << endl;
//     }
//
//     return 0;
// }

// #include <iostream>
//
// bool isPalindrome(std::string& s, int start, int string_length){
//   while(start < string_length){
//     if(s[start] != s[string_length]){
//       start++;
//       string_length--;
//       return false;
//     }
//   }
//   return true;
// }
//
// int main(int argc, char const *argv[]) {
//   std::string s = "madam";
//   int string_length = s.length(); // will be constant
//   int start = 0;
//
//   std::cout << isPalindrome(s, start, string_length) << std::endl;
//   return 0;
// }

// C++ program for the above approach
#include <bits/stdc++.h>
#include <iostream>
// Function to check whether
// the string is palindrome
std::string isPalindrome(std::string S){
	// Stores the reverse of the
	// string S
	std::string P = S;

	// Reverse the string P
	reverse(P.begin(), P.end());

	// If S is equal to P
	if (S == P) {
		// Return "Yes"
		return "Yes";
	}
	// Otherwise
	else {
		// return "No"
		return "No";
	}
}

// Driver Code
int main(){
	std::string S = "ABCDCBA";
	std::cout << isPalindrome(S);

	return 0;
}
