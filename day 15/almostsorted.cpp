#include <bits/stdc++.h>
using namespace std;

void almostSorted(vector<int> arr) {
    int n = arr.size();

    // Step 1: check if already sorted
    if (is_sorted(arr.begin(), arr.end())) {
        cout << "yes\n";
        return;
    }

    // Step 2: find first and last index where order is wrong
    int l = 0, r = n - 1;
    while (l < n - 1 && arr[l] < arr[l + 1]) l++;
    while (r > 0 && arr[r] > arr[r - 1]) r--;

    // Step 3: try swapping arr[l] and arr[r]
    swap(arr[l], arr[r]);
    if (is_sorted(arr.begin(), arr.end())) {
        cout << "yes\n";
        cout << "swap " << l + 1 << " " << r + 1 << "\n"; // +1 for 1-based index
        return;
    }
    swap(arr[l], arr[r]); // undo swap

    // Step 4: try reversing subarray [l...r]
    reverse(arr.begin() + l, arr.begin() + r + 1);
    if (is_sorted(arr.begin(), arr.end())) {
        cout << "yes\n";
        cout << "reverse " << l + 1 << " " << r + 1 << "\n";
        return;
    }

    // Step 5: neither worked
    cout << "no\n";
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    almostSorted(arr);

    return 0;
}
