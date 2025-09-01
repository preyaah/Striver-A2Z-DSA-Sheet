#include <iostream>
#include <vector>

using namespace std;

// Recursive approach
int binarySearch(vector<int> &arr, int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // If the element is present at the middle itself
        if (arr[mid] == x) {
            return mid;
        }

        // If element is smaller than mid, then it can only be present in left subarray
        if (arr[mid] > x) {
            return binarySearch(arr, low, mid - 1, x);
        } else {
            // Else the element can only be present in right subarray
            return binarySearch(arr, mid + 1, high, x);
        }
    }
    return -1;
}

int main() {
    int x;
    cin >> x;

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1) {
        cout << "Element is not present in the array";
    } else {
        cout << "Element is present at index " << result;
    }

    return 0;
}
