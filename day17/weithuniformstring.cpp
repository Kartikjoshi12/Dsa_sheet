#include <bits/stdc++.h>
using namespace std;

vector<string> weightedUniformStrings(string s, vector<int> queries) {
    unordered_set<int> weights;  // store all possible weights
    int currentWeight = 0;
    char prev = 0;

    // Traverse the string
    for (char c : s) {
        int val = c - 'a' + 1;  // weight of the current character

        if (c == prev) {
            // same char continues → add to previous weight
            currentWeight += val;
        } else {
            // new char starts → reset weight
            currentWeight = val;
        }

        // store this weight
        weights.insert(currentWeight);
        prev = c;
    }

    // Answer queries
    vector<string> result;
    for (int q : queries) {
        if (weights.find(q) != weights.end()) {
            result.push_back("Yes");
        } else {
            result.push_back("No");
        }
    }
    return result;
}

int main() {
    string s;
    cin >> s;

    int n;
    cin >> n;
    vector<int> queries(n);
    for (int i = 0; i < n; i++) cin >> queries[i];

    vector<string> ans = weightedUniformStrings(s, queries);
    for (string res : ans) cout << res << endl;
    return 0;
}
