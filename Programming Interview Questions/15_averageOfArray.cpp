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

float avgOfArray(int arr[], int n){
    float sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum/n;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    inputArray(arr,n);

    cout << endl;

    float avg = avgOfArray(arr, n);
    cout << endl << "Avg of all elements of the array is: " << avg << endl;

    return 0;
}