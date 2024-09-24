//  House Robber II
// Dynamic Programming

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumNonAdjacentSum(vector<int> &nums)
    {

        int n = nums.size();

        int prev = nums[0];
        int prev2 = 0;

        for (int i = 1; i < nums.size(); i++)
        {
            int take = nums[i];
            if (i > 1)
                take += prev2;
            int nottake = 0 + prev;

            int curi = max(take, nottake);

            prev2 = prev;
            prev = curi;
        }
        return prev;
    }

    int rob(vector<int> &nums)
    {
        vector<int> temp1, temp2;

        int n = nums.size();
        if (n == 1)
            return nums[0];

        for (int i = 0; i < n; i++)
        {
            if (i != 0)
                temp1.push_back(nums[i]);
            if (i != n - 1)
                temp2.push_back(nums[i]);
        }
        return max(maximumNonAdjacentSum(temp1), maximumNonAdjacentSum(temp2));
    }
};

int main()
{
    vector<int> nums = {2, 100, 10, 100, 80, 100, 2};
    int k = 3;
    Solution sol;

    vector<vector<int>> result;

    cout << sol.rob(nums);

    return 0;
}