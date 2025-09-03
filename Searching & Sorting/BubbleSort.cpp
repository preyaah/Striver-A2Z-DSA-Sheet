#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    // Outer loop runs from 0 to n-2
    // After each pass, the largest element settles at the end
    for (int i = 0; i < n - 1; i++) {
        // Inner loop: compares adjacent elements up to (n - i - 2)
        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next, swap them
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print sorted array
    cout << "After Using Bubble Sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n; // user enters size of array

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // user enters array elements
    }

    // Print array before sorting
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call bubble sort
    bubbleSort(arr, n);

    return 0;
}
