// Subsets using recursion

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;

    void helper(vector<int> A, vector<int> temp, int i)
    {
        if (A.size() == i)
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(A[i]);
        helper(A, temp, i + 1);
        temp.pop_back();
        helper(A, temp, i + 1);
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

    vector<vector<int>> ans;

    Solution sol;
    ans = sol.subsets(nums);
    sort(ans.begin(), ans.end());

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
