#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Pair representing: {value, original_day_index}
using Element = pair<int, int>;

// Returns the 3 largest elements along with their original indices
vector<Element> getTopThree(const vector<int>& values) {
    int n = values.size();
    vector<Element> indexed(n);
    
    for (int i = 0; i < n; i++) {
        indexed[i] = {values[i], i};
    }
    
    
    sort(indexed.begin(), indexed.end());
    
    return {indexed[n-1], indexed[n-2], indexed[n-3]};
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    // Extract top 3 candidates for each activity
    vector<Element> topA = getTopThree(a);
    vector<Element> topB = getTopThree(b);
    vector<Element> topC = getTopThree(c);

    int bestSum = 0;

    // Test all 3 x 3 x 3 = 27 combinations
    for (const auto& itemA : topA) {
        for (const auto& itemB : topB) {
            for (const auto& itemC : topC) {
                int dayA = itemA.second;
                int dayB = itemB.second;
                int dayC = itemC.second;

                // Ensure all three days are distinct
                if (dayA != dayB && dayA != dayC && dayB != dayC) {
                    int currentSum = itemA.first + itemB.first + itemC.first;
                    bestSum = max(bestSum, currentSum);
                }
            }
        }
    }

    cout << bestSum << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;
    while (testCases--) {
        solve();
    }

    return 0;
}