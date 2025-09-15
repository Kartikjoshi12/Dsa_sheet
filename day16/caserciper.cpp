#include <bits/stdc++.h>
using namespace std;

string caesarCipher(string s, int k) {
    string result = "";
    k = k % 26; // normalize k (in case it's > 26)

    for (char c : s) {
        if (isalpha(c)) {
            if (islower(c)) {
                result += ((c - 'a' + k) % 26) + 'a';
            } else if (isupper(c)) {
                result += ((c - 'A' + k) % 26) + 'A';
            }
        } else {
            result += c; // leave non-alphabet unchanged
        }
    }
    return result;
}

int main() {
    int n, k;
    string s;
    cin >> n >> s >> k;

    cout << caesarCipher(s, k) << endl;
    return 0;
}
