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

int maxElement(int arr[], int n){
    int max = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    inputArray(arr,n);

    cout << endl << "Array looks like: ";
    printArray(arr,n);

    int max = maxElement(arr,n);
    cout << endl << "Maximum element in the array is: " << max << endl;

    return 0;
}