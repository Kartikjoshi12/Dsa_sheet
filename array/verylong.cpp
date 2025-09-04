#include <bits/stdc++.h>
using namespace std;

void extraLongFactorials(int n) {
    vector<int> result;
    result.push_back(1); // start with 1
    int carry = 0;

    for (int x = 2; x <= n; x++) {
        carry = 0;
        for (int i = 0; i < result.size(); i++) {
            int prod = result[i] * x + carry;
            result[i] = prod % 10;   // store digit
            carry = prod / 10;       // carry forward
        }
        while (carry) {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }

    // Print digits in reverse
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    extraLongFactorials(n);
    return 0;
}
