
// permutations LC

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void f(vector<int> &nums, vector<int> &temp, vector<vector<int>> &ans, int freq[])
    {
        if (temp.size() == nums.size())
        {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (!freq[i])
            {
                temp.push_back(nums[i]);
                freq[i] = 1;
                f(nums, temp, ans, freq);
                freq[i] = 0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int freq[nums.size()];

        vector<int> temp;

        for (int i = 0; i < nums.size(); i++)
            freq[i] = 0;

        f(nums, temp, ans, freq);
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