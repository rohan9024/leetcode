
// subset sum (gfg)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void f(vector<int> &arr, int ind, int sum, vector<int> &ans)
    {
        if (ind == arr.size())
        {
            ans.push_back(sum);
            return;
        }
        f(arr, ind + 1, sum + arr[ind], ans);
        f(arr, ind + 1, sum, ans);
    }
    vector<int> subsetSums(vector<int> &arr)
    {
        vector<int> ans;
        f(arr, 0, 0, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{

    vector<int> a = {2, 3};
    vector<int> ans;
    Solution sol;

    ans = sol.subsetSums(a);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}