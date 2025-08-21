
// subsets LC
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;

    void f(vector<int> &a, int ind, vector<vector<int>> &ans, vector<int> &temp)
    {
        if (ind == a.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(a[ind]);
        f(a, ind + 1, ans, temp);
        temp.pop_back();
        f(a, ind + 1, ans, temp);
    }

    vector<vector<int>> subsets(vector<int> &a)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        f(a, 0, ans, temp);
        return ans;
    }
};

int main()
{
    vector<int> a = {1, 2, 2};
    vector<vector<int>> ans;
    Solution sol;

    ans = sol.subsets(a);

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