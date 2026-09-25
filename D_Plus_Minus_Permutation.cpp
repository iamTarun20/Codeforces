#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;

        // Find LCM
        long long gcd = __gcd(x, y);
        long long lcm = (x / gcd) * y;

        // Count x-only and y-only positions
        long long xCount = n / x - n / lcm;
        long long yCount = n / y - n / lcm;

        // Sum of largest xCount numbers
        // Example: n = 7, xCount = 3
        // 7 + 6 + 5
        long long xSum =
            xCount * (2 * n - xCount + 1) / 2;

        // Sum of smallest yCount numbers
        // Example: yCount = 3
        // 1 + 2 + 3
        long long ySum =
            yCount * (yCount + 1) / 2;

        cout << xSum - ySum << '\n';
    }

    return 0;
}