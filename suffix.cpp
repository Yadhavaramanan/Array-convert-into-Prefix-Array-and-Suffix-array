#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n], suff[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize the last suffix sum
    suff[n - 1] = arr[n - 1];

    // Compute suffix sums
    for (int i = n - 2; i >= 0; i--) {
        suff[i] = suff[i + 1] + arr[i];
    }

    // Print the suffix array
    cout << "Suffix array:\n";
    for (int i = 0; i < n; i++) {
        cout << suff[i] << "\t";
    }

    return 0;
}
