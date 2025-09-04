#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted halves of the array
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array to store merged result
    int left = low;      // starting index of left half
    int right = mid + 1; // starting index of right half

    // Merge elements into temp[] in sorted order
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // If any elements remain in the left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // If any elements remain in the right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy back the merged elements to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Recursive function to apply merge sort
void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return; // base case: single element
    int mid = (low + high) / 2; // find midpoint

    // Recursively sort left and right halves
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    // Merge the two sorted halves
    merge(arr, low, mid, high);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n); // create vector of size n
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // take input from user
    }

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Apply merge sort
    mergeSort(arr, 0, n - 1);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
