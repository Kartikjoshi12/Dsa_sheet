#include <bits/stdc++.h>
using namespace std;

bool isKaprekar(long long n) {
    long long sq = n * n;
    string s = to_string(sq);
    int d = to_string(n).size();

    // Right part = last d digits
    string right = s.substr(s.size() - d);
    string left = (s.size() > d) ? s.substr(0, s.size() - d) : "0";

    long long L = stoll(left);
    long long R = stoll(right);

    return (L + R == n);
}

void kaprekarNumbers(int p, int q) {
    bool found = false;
    for (int i = p; i <= q; i++) {
        if (isKaprekar(i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) cout << "INVALID RANGE";
    cout << endl;
}

int main() {
    int p, q;
    cin >> p >> q;
    kaprekarNumbers(p, q);
    return 0;
}
