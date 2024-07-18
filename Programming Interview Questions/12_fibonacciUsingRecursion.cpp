#include <iostream>
using namespace std;

// function to print first n terms of fibonacci using recursion
void fibonacci(int n, int a = 0, int b = 1){
    if(n == 0){
        return;
    }
    cout << a << " ";
    fibonacci(n-1, b, a+b);
}
int main(){
    int n;
    cout << "Enter the terms of Fibonacci Series to print: ";
    cin >> n;

    cout << endl;
    fibonacci(n);

    return 0;
}