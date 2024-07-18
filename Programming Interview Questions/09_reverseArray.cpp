#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void inputArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << i << ": ";
        cin >> arr[i];
    }
}

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start++], arr[end--]);
    }
    return;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    inputArray(arr,n);

    cout << endl << "Array before reversing: ";
    printArray(arr,n);

    reverseArray(arr,n);

    cout << endl << "Array after reversing: ";
    printArray(arr,n);



    return 0;
}