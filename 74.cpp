//  Grid Unique Paths (Coding Ninjas)
// 2D Dynamic Programming

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        int dp[m][n];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                    dp[i][j] = 1;
                else
                {
                    int up = 0;
                    int left = 0;
                    if (i > 0)
                        up = dp[i - 1][j];
                    if (j > 0)
                        left = dp[i][j - 1];
                    dp[i][j] = up+left;
                }
            }
        }
        return dp[m - 1][n - 1];
    }
};

int main()
{
    Solution sol;

    cout << sol.uniquePaths(3, 3);

    return 0;
}