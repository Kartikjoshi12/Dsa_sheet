#include <bits/stdc++.h>
using namespace std;

// Recursive brute-force function
int minJumpsBrute(vector<int>& c, int i) {
    int n = c.size();
    
    // Base case: reached last cloud
    if (i == n - 1) return 0;
    
    // If thunder cloud, invalid path
    if (c[i] == 1) return INT_MAX;
    
    int jump1 = INT_MAX, jump2 = INT_MAX;
    
    // Try 1-step jump
    if (i + 1 < n && c[i+1] == 0) {
        jump1 = 1 + minJumpsBrute(c, i+1);
    }
    
    // Try 2-step jump
    if (i + 2 < n && c[i+2] == 0) {
        jump2 = 1 + minJumpsBrute(c, i+2);
    }
    
    return min(jump1, jump2);
}

int main() {
    vector<int> c = {0,0,1,0,0,1,0};
    int result = minJumpsBrute(c, 0);
    cout << "Brute Force Result = " << result << endl;
    return 0;
}
