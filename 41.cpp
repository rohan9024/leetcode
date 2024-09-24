// 39. Combination Sum
// Backtracking/Recursion

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;

    void helper(vector<int> &candidates, int target, int i, int currSum, vector<int> temp)
    {
        if (currSum > target)
        {
            return;
        }

        if (i == candidates.size())
        {
            if (currSum == target)
            {
                ans.push_back(temp);
            }
            return;
        }

        currSum += candidates[i];
        temp.push_back(candidates[i]);

        helper(candidates, target, i, currSum, temp);
        currSum -= candidates[i];

        temp.pop_back();
        helper(candidates, target, i + 1, currSum, temp);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> temp;
        helper(candidates, target, 0, 0, temp);
        return ans;
    }
};

int main()
{
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    Solution sol;

    vector<vector<int>> result;

    result = sol.combinationSum(candidates, target);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}