#include <iostream>
using namespace std;

int countDigits(string str){
    int count = 0;

    // ASCII value of 0-9 is 48-57
    for(int i=0; i<str.length(); i++){
        int ch = str[i];
        if(ch >= 48 && ch<= 57)
            count++;
    }

    return count;
}

int countDigits2(string str){
    int count = 0;

    for(int i=0; i<str.length(); i++){
        int number = str[i] - 48;

        if(number >=0 && number <= 9)
            count++;
    }

    return count;
}
int main(){
    string str;
    cout << "Enter the string: ";
    cin >> str;

    
    
    cout << endl;
    int count1 = countDigits(str);
    cout << "**** Method 01: ASCII method ****" << endl;
    cout << "Total number of numerical digits in the string " << str << " is: " << count1 << endl;

    int count2 = countDigits2(str);
    cout << "**** Method 01: TYPECASTING method ****" << endl;
    cout << "Total number of numerical digits in the string " << str << " is: " << count2 << endl;

    return 0;
}