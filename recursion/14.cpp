
// subsets II LC
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void f(vector<int> &nums, int ind, vector<vector<int>> &ans, vector<int> &temp)
    {
        ans.push_back(temp);

        for (int i = ind; i < nums.size(); i++)
        {
            if (nums[ind] != nums[ind - 1] && ind != i)
                continue;

            temp.push_back(nums[ind]);
            f(nums, i + 1, ans, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        f(nums, 0, ans, temp);
        return ans;
    }
};

int main()
{
    vector<int> a = {1, 2, 2};
    vector<vector<int>> ans;
    Solution sol;

    ans = sol.subsetsWithDup(a);

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