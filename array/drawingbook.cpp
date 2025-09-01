#include <bits/stdc++.h>
using namespace std;

int pageCount(int n, int p)
{
    int frontFlips = 0;
    int backFlips = 0;

    for (int i = 1; i <= n; i += 2)
    {
        if (i == p || i + 1 == p)
        {
            break;
        }
        frontFlips++;
    }

    for (int i = n; i >= 1; i -= 2)
    {
        if (i == p || i - 1 == p)
        {
            break;
        }
        backFlips++;
    }

    return min(frontFlips, backFlips);
}

int main()
{
    // Simulate flipping from the front

    // Simulate flipping from the back
    // If n is even, last pair is (n-1, n)
    // If n is odd, last pair is (n, n+1 dummy)
    int n, p;
    cin >> n >> p;

    cout << pageCount(n, p) << endl;

    return 0;
}
