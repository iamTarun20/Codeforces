#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> selectedday;

        for(int day = n-k+1; day <= n; day++)
        {
            selectedday.push_back(day);
        }

        long long amount = 0;

        amount += (1 << selectedday[0]);

        for(int i = 1; i < k; i++)
        {
            amount += 2;
        }

        cout << amount << endl;
    }
}