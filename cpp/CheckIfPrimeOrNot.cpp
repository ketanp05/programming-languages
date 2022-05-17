#include <iostream>
using namespace std;

int main() {

    int number;
    cin >> number;

    if(number == 0 || number == 1){
        cout << "not prime";
    }else if(number == 2){
        cout << "prime";
    }else{
        int i = 2;
        while(i < number){
            if(number % i == 0){
                cout << "not prime";
                return 0;
            }
            i++;
        }
        cout << "prime" << endl;
    }

	return 0;
}
