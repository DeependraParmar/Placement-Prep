#include <iostream>
#include <ctype.h>

using namespace std;

bool isVowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    
    return false;
}

bool isConsonant(char ch){
    int num = ch;

    if(num >= 97 && num <= 122)
        return true;
    
    return false;
}
int main(){
    string str;
    cout << "Enter the string: ";
    cin >> str;

    int vowelCount = 0, consonantCount = 0;

    for(int i=0; i<str.length(); i++){
        char ch = str[i];

        if(isVowel(ch))
            vowelCount++;
        else if(isConsonant(tolower(ch))){
            consonantCount++;
        }
    }

    cout << endl;
    cout << "Vowel count in " << str << " is: " << vowelCount << endl;
    cout << "Consonant count in " << str << " is: " << consonantCount << endl;

    return 0;
}