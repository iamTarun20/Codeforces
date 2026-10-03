#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        long long answer = 0;

        // Process each column
        for(int j = 0; j < m; j++)
        {
            vector<int> column;

            for(int i = 0; i < n; i++)
            {
                column.push_back(a[i][j]);
            }

            sort(column.begin(), column.end());

            // Calculate contribution of every element
            for(int i = 0; i < n; i++)
            {
                answer += 1LL * column[i] * (2 * i - n + 1);
            }
        }

        cout << answer << '\n';
    }

    return 0;
}