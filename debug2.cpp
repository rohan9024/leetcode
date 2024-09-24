// Fibonacci with DP
// 70. Climbing Stairs
// Dp

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // int climbStairs(int n)
    // {

    //     int prev = 1;
    //     int prev2 = 1;

    //     for (int i = 2; i <= n; i++)
    //     {
    //         int curi = prev + prev2;
    //         prev = prev2;
    //         prev2 = curi;
    //     }
    //     return prev2;
    // }
    int preClimbStairs(int n, vector<int> &dp)
    {
        if (n <= 1)
            return dp[n] = 1;

        if (dp[n] != -1)
            return dp[n];

        int left = preClimbStairs(n - 1, dp);
        int right = preClimbStairs(n - 2, dp);

        return dp[n] = right + left;
    }

    int climbStairs(int n)
    {
        vector<int> dp(n + 1, -1);
        preClimbStairs(n, dp);

        return dp[n];
    }
};

int main()
{

    int n = 4;

    vector<int> dp(n + 1, -1);

    Solution sol;
    cout << sol.climbStairs(n);

    return 0;
}