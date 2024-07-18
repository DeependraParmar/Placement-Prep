#include <iostream>
using namespace std;

int main(){
    // A string is a palindrom if the reverse of the string is equal to the string itself. For eg, mom, dad, etc.
    // It can also have multiple approaches for reversing the string. I hope you can get those in the first program. Let's see the most optimised one over here.

    string str;
    cout << "Enter the string for palindrome check: ";
    cin >> str;

    bool isPalindrome = true;
    int n = str.length();

    int start = 0;
    int end = n-1;

    while(start < end){
        if(str[start++] != str[end--]){
            isPalindrome = false;
            break;
        }
    }
    
    cout << endl;

    if(isPalindrome){
        cout << "String " << str << " is PALINDROME" << endl;
    }
    else{
        cout << "String " << str << " is NOT PALINDROME" << endl;
    }

    return 0;
}