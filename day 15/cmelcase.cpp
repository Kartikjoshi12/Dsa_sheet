#include <bits/stdc++.h>
using namespace std;

int camelcase(string s) {
    int count = 1; // first word always exists
    for (char c : s) {
        if (isupper(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    string s;
    cin >> s;
    cout << camelcase(s) << "\n";
    return 0;
}
