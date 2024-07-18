#include <iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter the string here: ";
    cin >> str;

    char ch;
    cout << "Enter the character to find the occurence of: ";
    cin >> ch;

    int count = 0;

    for(int i=0; i<str.length(); i++){
        char c = str[i];

        if(c == ch)
            count++;
    }

    cout << endl << "Occurence of charcter " << ch << " is the string " << str << " is: " << count << endl;
    return 0;
}