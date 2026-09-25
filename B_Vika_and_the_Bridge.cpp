#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> last(k + 1, 0);
        vector<int> largest(k + 1, 0);
        vector<int> secondLargest(k + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            int gap = i - last[x] - 1;

            if (gap > largest[x])
            {
                secondLargest[x] = largest[x];
                largest[x] = gap;
            }
            else if (gap > secondLargest[x])
            {
                secondLargest[x] = gap;
            }

            last[x] = i;
        }

        int answer = INT_MAX;

        for (int color = 1; color <= k; color++)
        {
            int finalGap = n - last[color];

            if (finalGap > largest[color])
            {
                secondLargest[color] = largest[color];
                largest[color] = finalGap;
            }
            else if (finalGap > secondLargest[color])
            {
                secondLargest[color] = finalGap;
            }

            int score = max(
                secondLargest[color],
                (largest[color] + 1) / 2
            );

            answer = min(answer, score);
        }

        cout << answer << '\n';
    }
}