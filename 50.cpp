// 2149. Rearrange Array Elements by Sign

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);

        int pos = 0, neg = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                ans[pos] = nums[i];
                pos += 2;
            }
            else
            {
                ans[neg] = nums[i];
                neg += 2;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {};
    vector<int> ans;

    Solution sol;
    ans = sol.rearrangeArray(nums);

    return 0;
}