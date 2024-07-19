#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n for even-odd test check: ";
    cin >> n;

    // approach 01: Divisibility test for 2

    cout << endl << "**** Divisibility by 2 Test ****" << endl;
    if(n % 2 == 0){
        cout << n << " is an EVEN Number" << endl;
    }
    else{
        cout << n << " is an ODD Number" << endl;
    }

    // approach 02: Bitwise operator
    cout << endl << endl << "**** Bitwise Test ****" << endl;
    if(n & 1){
        cout << n << " is an ODD Number" << endl;
    }
    else{
        cout << n << " is an EVEN Number" << endl;
    }

    return 0;
}