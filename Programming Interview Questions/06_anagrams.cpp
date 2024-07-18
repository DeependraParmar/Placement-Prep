#include <iostream>
using namespace std;

bool checkAnagram(string str1, string str2){
    bool isAnagram = true;

    if(str1.length() != str2.length()){
        return false;
    }
    else{
        for(int i=0; i<str1.length(); i++){
        char ch1 = str1[i];
        bool isFound = false;

            for(int j=0; j<str1.length(); j++){
                char ch2 = str2[j];

                if(ch1 == ch2){
                    isFound = true;
                    str2[j] == '@'; // marking the character as second string as marked/paired.
                    continue;    
                }
            }

            if(!isFound){
                isAnagram = false;
                break;
            }
        }
    }

    return isAnagram;
}
int main(){
    // Two strings are said to be anagrams if by rearranging any one of them, gives the second string. Basically, the character and the their occurences in the string is equal.
    // For eg: cinema and iceman.

    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    // brute force: for every single character in first string, search for the exact character in the second one and if found, change the character as marked.

    // optimal approach: sort both of the strings and then, check for every character.

    
    bool isAnagram = checkAnagram(str1, str2);
    cout << endl;

    if(isAnagram){
        cout << str1 << " and " << str2 << " are ANAGRAMS" << endl;
    }
    else{
        cout << str1 << " and " << str2 << " are NOT ANAGRAMS" << endl;
    }

    return 0;
}