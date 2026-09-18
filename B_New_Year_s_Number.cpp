#include <bits/stdc++.h>
using namespace std;

vector<int> dp(1000001, -1);

bool sumzero(int n)
{
    // Base case
    if (n == 0)
        return true;

    // Cannot reach 0
    if (n < 0)
        return false;

    // Already calculated
    if (dp[n] != -1)
        return dp[n];

    // Calculate and store
    dp[n] = sumzero(n - 2020) || sumzero(n - 2021);

    return dp[n];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (sumzero(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}