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

void sortArray(int arr[], int n){
    for(int i=0; i<n; i++){
        bool isSwapped = false;

        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
                isSwapped = true;
            }
        }

        if(!isSwapped)
            break;
    }

    return;
}
int main(){
    // We are going to use the simplest algorithm: Smart Bubble Sort

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    inputArray(arr,n);

    cout << endl << "Array before sorting: ";
    printArray(arr,n);

    sortArray(arr,n);

    cout << endl << "Array after sorting: ";
    printArray(arr,n);

    return 0;
}