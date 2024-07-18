#include <iostream>
#include <stack>
using namespace std;

string reverseTwoPointers(string str){
    int start = 0;
    int end = str.length()-1;

    while(start <= end){
        swap(str[start++], str[end--]);
    }

    return str;
}

string reverseUsingStack(string str){
    stack<char> stk;
    int n = str.length();

    for(int i=0; i<n; i++){
        stk.push(str[i]);
    }

    string ans = "";

    while(!stk.empty()){
        ans += stk.top();
        stk.pop();
    }

    return ans;
}
int main(){
    string str;
    cout << "Enter the string to reverse: " ;
    cin >> str;
    cout << endl << endl;

    // string can be reverse using multiple approaches: Some of them are
    // 1. Using two-pointers for reversing
    cout << "String reversed using two-pointers: " << reverseTwoPointers(str) << endl;


    // 2. Using stack and its special LIFO property for reversal
    cout << "String reversed using stack is: " << reverseUsingStack(str) << endl;

    return 0;
}