#include <vector>
#include <string>
using namespace std;

vector<string> cavityMap(vector<string> grid) {
    int n = grid.size();
    vector<string> result = grid;  // copy original

    for (int i = 1; i < n - 1; i++) {           // skip borders
        for (int j = 1; j < n - 1; j++) {
            char current = grid[i][j];
            // check 4 neighbors
            if (current > grid[i-1][j] && 
                current > grid[i+1][j] && 
                current > grid[i][j-1] && 
                current > grid[i][j+1]) {
                result[i][j] = 'X';
            }
        }
    }
    return result;
}
int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) cin >> grid[i];

    vector<string> result = cavityMap(grid);

    for (string row : result) cout << row << endl;

    return 0;
}

