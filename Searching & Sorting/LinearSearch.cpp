#include <iostream>
#include <vector>
using namespace std;

int search(vector <int>& arr, int x) {
    int n;
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            return i;
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

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = search(arr, x);

    if(res == -1) {
        cout << "Element is not present in array";
    } else {
        cout << x << " " << "is present in array at index" << " " << res;
    }
    return 0;
}