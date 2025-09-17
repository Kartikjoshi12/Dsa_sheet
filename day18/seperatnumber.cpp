#include <bits/stdc++.h>
using namespace std;

void separateNumbers(string s) {
    int n = s.size();

    for (int len = 1; len <= n / 2; len++) {  // starting number length
        string first = s.substr(0, len);
        if (first[0] == '0') continue; // no leading zero allowed

        long long num = stoll(first);
        long long prev = num;

        string built = first;  // reconstructed sequence

        while (built.size() < s.size()) {
            prev++;
            built += to_string(prev);
        }

        if (built == s) {
            cout << "YES " << num << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        separateNumbers(s);
    }
}
