// 46. Permutations
// Backtracking

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
vector<vector<int>> ans;

    void helper(vector<int> &nums, vector<int> &per, int c)
    {
        if (c == nums.size())
        {
            ans.push_back(per);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (per[i] == 11)
            {
                per[i] = nums[c];
                helper(nums, per, c + 1);
                per[i] = 11;
            }
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> per(n, 11);
        helper(nums, per, 0);

        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;

    Solution sol;
    ans = sol.permute(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}