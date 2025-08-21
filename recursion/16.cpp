
// permutations better wala LC

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void f(int ind, vector<int> &nums, vector<vector<int>> &ans)
    {
        if (ind == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int i = ind; i < nums.size(); i++)
        {
            swap(nums[i], nums[ind]);
            f(ind + 1, nums, ans);
            swap(nums[i], nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        f(0, nums, ans);
        return ans;
    }
};

int main()
{
    vector<int> a = {1, 2, 3};
    vector<vector<int>> ans;
    Solution sol;

    ans = sol.permute(a);

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

// 1,2,3