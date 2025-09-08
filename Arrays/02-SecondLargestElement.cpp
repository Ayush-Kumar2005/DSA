#include <bits/stdc++.h>
using namespace std;

// ------------------------------------------------------
// BRUTE FORCE APPROACH
// Sort the array, then find the second largest by scanning backwards.
// T.C = O(n log n)  (due to sorting)
// S.C = O(1)
// ------------------------------------------------------
void slargest(vector<int>& arr) {
    int n = arr.size();
    if (n < 2) { // edge case
        cout << "No second largest\n";
        return;
    }

    sort(arr.begin(), arr.end());
    int largest = arr[n - 1];
    int secondLargest = INT_MIN;

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) {
            secondLargest = arr[i];
            break;
        }
    }

    if (secondLargest == INT_MIN)
        cout << "No second largest\n";
    else
        cout << secondLargest << "\n";
}

// ------------------------------------------------------
// BETTER APPROACH
// First pass: find the largest
// Second pass: find the max < largest
// T.C = O(2n) ≈ O(n)
// S.C = O(1)
// ------------------------------------------------------
void secondLargest(vector<int>& arr) {
    int n = arr.size();
    if (n < 2) {
        cout << "No second largest\n";
        return;
    }

    int largest = arr[0];
    int secondLargest = INT_MIN;

    // Pass 1: Find largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Pass 2: Find best smaller than largest
    for (int i = 0; i < n; i++) {
        if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        cout << "No second largest\n";
    else
        cout << secondLargest << "\n";
}

// ------------------------------------------------------
// OPTIMAL APPROACH
// Single traversal: track largest and second largest together
// T.C = O(n)
// S.C = O(1)
// ------------------------------------------------------
void secLargest(vector<int>& arr) {
    int n = arr.size();
    if (n < 2) {
        cout << "No second largest\n";
        return;
    }

    int largest = arr[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        cout << "No second largest\n";
    else
        cout << secondLargest << "\n";
}

int main() {
    vector<int> arr = {3, 4, 2, 8, 7, 6};

    cout << "Brute Force: ";
    slargest(arr);

    cout << "Better: ";
    secondLargest(arr);

    cout << "Optimal: ";
    secLargest(arr);

    return 0;
}
