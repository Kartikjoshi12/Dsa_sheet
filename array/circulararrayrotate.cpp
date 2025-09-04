#include <bits/stdc++.h>
using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int n = a.size();

    // Perform k rotations
    for (int r = 0; r < k; r++) {
        int last = a[n - 1];  // store last element
        // shift elements to the right
        for (int i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = last; // put last element in front
    }

    // Answer queries
    vector<int> result;
    for (int q : queries) {
        result.push_back(a[q]);
    }
    return result;
}

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> queries(q);
    for (int i = 0; i < q; i++) cin >> queries[i];

    vector<int> ans = circularArrayRotation(a, k, queries);
    for (int val : ans) cout << val << endl;
}
