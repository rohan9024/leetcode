// 39. Combination Sum using recursion

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void func(int i, int target, vector<int> &candidates, vector<vector<int>> &ans, vector<int> &temp)
    {
        if (i == candidates.size())
        {
            if (target == 0)
                ans.push_back(temp);
            return;
        }

        // pick
        if (candidates[i] <= target)
        {
            temp.push_back(candidates[i]);
            func(i, target - candidates[i], candidates, ans, temp);
            temp.pop_back();
        }
        // not pick
        func(i + 1, target, candidates, ans, temp);
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        func(0, target, candidates, ans, temp);
        return ans;
    }
};

int main()
{
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> ans;

    Solution sol;
    ans = sol.combinationSum(candidates, target);

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