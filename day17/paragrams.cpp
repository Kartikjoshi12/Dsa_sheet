#include <bits/stdc++.h>
using namespace std;

string pangrams(string s) {    
    // Track seen letters
    unordered_set<char> seen;
    for (char c : s) {
        c = to_lower(c);
        if (c >= 'a' && c <= 'z') {
            seen.insert(c);
        }
    }
    
    return (seen.size() == 26) ? "pangram" : "not pangram";
}

int main() {
    string s;
    getline(cin, s); // input full line with spaces
    
    cout << pangrams(s) << endl;
    return 0;
}
