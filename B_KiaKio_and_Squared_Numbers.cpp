#include <bits/stdc++.h>
using namespace std;

int nextNumber(int x)
{
    int sum = 0;

    while(x > 0)
    {
        int digit = x % 10;

        sum += digit * digit;

        x /= 10;
    }

    return sum;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        map<int, long long> freq;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            for(int step = 0; step < 100; step++)
            {
                x = nextNumber(x);
            }

            freq[x]++;
        }

        long long answer = 0;

        for(auto &it : freq)
        {
            answer += it.second * (it.second - 1) / 2;
        }

        cout << answer << '\n';
    }
}