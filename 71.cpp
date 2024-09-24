//  Maximum sum of non-adjacent elements (Coding Ninjas)
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
};

int main()
{
    vector<int> nums = {20, 1, 0, 10};
    int k = 3;
    Solution sol;

    vector<vector<int>> result;

    cout << sol.maximumNonAdjacentSum(nums);

    return 0;
}