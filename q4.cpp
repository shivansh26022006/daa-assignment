#include <bits/stdc++.h>
using namespace std;
int maxarraysum(int arr[], int n) {
    int maxsofar = arr[0];
    int currentsum = arr[0];
    for (int i = 1; i < n; i++) {
        currentsum = max(arr[i], currentsum + arr[i]);
        maxsofar = max(maxsofar, currentsum);
    }
    return maxsofar;
}
int main() {
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Max subarray sum = " << maxarraysum(arr, n);
    return 0;
}
