// 40. Combination Sum 2 using recursion

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void func(int ind, int target, vector<int> &candidates, vector<vector<int>> &ans, vector<int> &temp)
    {
        if (target == 0)
        {
            ans.push_back(temp);
            return;
        }

        for (int i = ind; i < candidates.size(); i++)
        {
            if (i > ind && candidates[i] == candidates[i - 1])
                continue;

            if (candidates[i] > target)
                break;
            temp.push_back(candidates[i]);
            func(i + 1, target - candidates[i], candidates, ans, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        func(0, target, candidates, ans, temp);
        return ans;
    }
};

int main()
{
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    vector<vector<int>> ans;

    Solution sol;
    ans = sol.combinationSum2(candidates, target);

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