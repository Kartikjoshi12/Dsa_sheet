#include <bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> arr) {
    vector<int> freq(100, 0);  // step 1: 100 elements initialized to 0
    
    // step 2: count frequencies
    for (int num : arr) {
        freq[num]++;
    }

    return freq; // step 3: return result
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> result = countingSort(arr);
    
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
}
