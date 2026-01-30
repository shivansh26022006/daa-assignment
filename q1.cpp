#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int x, int n) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main() {
    int arr[] = {3, 10, 55, 76, 89, 90, 100}; // sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 55;
    int result = binarysearch(arr, x, n);
    if (result == -1)
        cout << "Element is not present in array" << endl;
    else
        cout << "Element is present at index " << result << endl;
    return 0;
}
