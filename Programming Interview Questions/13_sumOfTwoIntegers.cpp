#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter the value of first number: ";
    cin >> a;

    cout << "Enter the value of second number: ";
    cin >> b;

    int c = a + b;

    cout << endl;
    cout << "Sum of " << a << " and " << b << " is: " << c << endl;
    return 0;
}