#include <iostream>
using namespace std;

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    // Outer loop: iterate over each position in the array (till 2nd last element)
    for(int i = 0; i <= n - 2; i++) {
        int mini = i;  // assume current index has the minimum element

        // Inner loop: find the minimum element in the remaining unsorted part
        for(int j = i; j <= n - 1; j++) {
            if(arr[j] < arr[mini]) {  // if a smaller element is found
                mini = j;             // update index of the new minimum
            }
        }

        // Swap the found minimum element with the element at position i
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    cin >> n;  // input the size of the array

    int arr[n];  // declare an array of size n

    // Input array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call selection sort to sort the array
    selectionSort(arr, n);

    // Print the sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i];
        cout << " ";
    }

    return 0; // successful program end
}
