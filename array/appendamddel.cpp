#include <bits/stdc++.h>
using namespace std;

string appendAndDeleteBrute(string s, string t, int k) {
    int n = s.size();

    // Try all possible delete counts
    for (int del = 0; del <= n; del++) {
        string prefix = s.substr(0, n - del);

        // Check if target starts with this prefix
        if (t.rfind(prefix, 0) == 0) { // means t starts with prefix
            int ops = del + (int)t.size() - (n - del);
            if (ops == k) return "Yes";
        }
    }
    return "No";
}

int main() {
    string s, t;
    int k;
    cin >> s >> t >> k;
    cout << appendAndDeleteBrute(s, t, k) << endl;
    return 0;
}
