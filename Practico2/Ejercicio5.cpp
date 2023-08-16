
#include "bits/stdc++.h"
using namespace std;
 
// Function to swap two a & b value
void swapVariables(int *valor1, int *valor2){
    int temporal = *valor1;
    *valor1 = *valor2;
    *valor2 = temporal;
}
 
// Function to print array element
void printArray(int arr[], int N){
    for (int i = 0; i < N; i++) {
        cout << arr[i] << ' ';
    }
}
 
// Function to sort the array in O(N)
void sortArray(int array[], int rangoK){

    // Traverse the array
    for (int i = 0; i < rangoK;) {
 
        // If the current element is at correct position
        if (array[i] == i + 1) {
            i++;
        }

        // Else swap the current element with it's correct position
        else {
            swapVariables(&array[i], &array[array[i] - 1]);
        }
    }
}
 
// Driver Code
int main(){
    int arr[] = {2, 1, 5, 3, 4};
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call to sort the array
    sortArray(arr, N);
 
    // Function call to print the array
    printArray(arr, N);
    return 0;
}