
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;

        long long total = 0;
        long long d = y - x;

        long long limit = max(0LL, d - x + 1);
        limit = min(limit, k);

        for(long long i = 0; i < limit; i++)
        {
            total += d % (x + i);
        }

        total += (k - limit) * d;

        cout << total << endl;
    }

    return 0;
}
