#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << "\n";
}

void insertionSort1(int n, vector<int> arr) {
    int key = arr[n-1]; // last element
    int i = n - 2;

    // shift elements to the right until we find correct position for key
    while (i >= 0 && arr[i] > key) {
        arr[i+1] = arr[i]; // shift
        printArray(arr);   // print after each shift
        i--;
    }
    arr[i+1] = key; // insert key
    printArray(arr); // final print
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    insertionSort1(n, arr);
    return 0;
}
