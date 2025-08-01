// Leaders in an Array TUF

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> leaders(vector<int> &nums)
    {
        vector<int> ans;
        int maxi = INT_MIN;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (maxi < nums[i])
            {
                ans.push_back(nums[i]);
                maxi = nums[i];
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};


int main()
{
    vector<int> nums = {-3, 4, 5, 1, -4, -5};
    vector<int> ans;

    Solution sol;
    ans = sol.leaders(nums);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}
