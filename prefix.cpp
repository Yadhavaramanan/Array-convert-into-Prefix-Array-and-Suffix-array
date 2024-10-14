//Prefix array
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n], pref[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize the first prefix sum
    pref[0] = arr[0];

    // Compute prefix sums
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + arr[i];
    }

    // Print the prefix array
    cout << "Prefix array:\n";
    for (int i = 0; i < n; i++) {
        cout << pref[i] << "\t";
    }

    return 0;
}
