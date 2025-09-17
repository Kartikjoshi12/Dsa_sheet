#include <bits/stdc++.h>
using namespace std;

vector<int> quickSort(vector<int> arr) {
    int pivot = arr[0];
    vector<int> left, equal, right;

    for (int x : arr) {
        if (x < pivot) {
            left.push_back(x);
        } else if (x == pivot) {
            equal.push_back(x);
        } else {
            right.push_back(x);
        }
    }

    // Combine left + equal + right
    vector<int> result;
    result.insert(result.end(), left.begin(), left.end());
    result.insert(result.end(), equal.begin(), equal.end());
    result.insert(result.end(), right.begin(), right.end());

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> result = quickSort(arr);

    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
