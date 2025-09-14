#include <bits/stdc++.h>
using namespace std;

string superReducedString(string s) {
    string result; // acts like a stack

    for (char c : s) {
        if (!result.empty() && result.back() == c) {
            result.pop_back(); // remove the pair
        } else {
            result.push_back(c);
        }
    }

    return result.empty() ? "Empty String" : result;
}

int main() {
    string s;
    cin >> s;
    cout << superReducedString(s) << "\n";
    return 0;
}
