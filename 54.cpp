// 40. Combination Sum II
// Recursion

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> result;
        vector<int> cur;

        dfs(candidates, target, 0, 0, cur, result);

        return result;
    }

private:
    void dfs(vector<int> &candidates, int target, int sum, int start, vector<int> &cur, vector<vector<int>> &result)
    {

        if (sum > target)
        {
            return;
        }

        if (sum == target)
        {
            result.push_back(cur);
            return;
        }

        for (int i = start; i < candidates.size(); i++)
        {
            if (i > start && candidates[i] == candidates[i - 1])
            {
                continue;
            }

            cur.push_back(candidates[i]);

            dfs(candidates, target, sum + candidates[i], i + 1, cur, result);

            cur.pop_back();
        }
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