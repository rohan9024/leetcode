// 377. Combination Sum IV

// DP

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int combinationSum4(vector<int> &nums, int target)
    {
        vector<unsigned int> dp(target + 1, 0);
        dp[0] = 1;

        for (int i = 1; i <= target; i++)
        {
            for (auto num : nums)
            {
                if (i - num >= 0)
                {
                    dp[i] += dp[i - num];
                }
            }
        }

        return dp[target];
    }
};

int main()
{
    vector<int> nums = {1, 2, 3};
    int target = 3;

    Solution sol;

    cout << sol.combinationSum4(nums, target);

    return 0;
}