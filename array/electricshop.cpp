#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(const vector<int>& keyboards, const vector<int>& drives, int b) {
    int maxSpent = -1;
    for (int k : keyboards) {
        for (int d : drives) {
            int total = k + d;
            if (total <= b && total > maxSpent) {
                maxSpent = total;
            }
        }
    }
    return maxSpent;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int b, n, m;
    if (!(cin >> b >> n >> m)) return 0;

    vector<int> keyboards(n), drives(m);
    for (int i = 0; i < n; ++i) cin >> keyboards[i];
    for (int j = 0; j < m; ++j) cin >> drives[j];

    cout << getMoneySpent(keyboards, drives, b) << '\n';
    return 0;
}
