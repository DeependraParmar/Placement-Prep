#include <iostream>
using namespace std;

int sumOfNumbersInAString(string str){
    int sum = 0;

    for(int i=0; i<str.length(); i++){
        int num = str[i] - 48;

        if(num >= 0 && num <= 9){
            sum += num;
        }
    }

    return sum;
}
int main(){
    string str;
    cout << "Enter the string: ";
    cin >> str;

    int sum = sumOfNumbersInAString(str);
    cout << endl;
    cout << "Sum of numbers in " << str << " is: " << sum << endl;

    return 0;
}