// 78. Subsets
// Backtracking/Recursion

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;

    void helper(vector<int> A, vector<int> temp, int i)
    {
        if (i == A.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(A[i]);
        helper(A, temp, i + 1);
        temp.pop_back();
        helper(A, temp, i + 1);
        return;
    }
    vector<vector<int>> subsets(vector<int> &A)
    {
        vector<int> temp;
        helper(A, temp, 0);
        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3};
    int k = 3;
    Solution sol;

    vector<vector<int>> result;

    result = sol.subsets(nums);

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