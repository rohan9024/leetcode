// 2149. Rearrange Array Elements by Sign

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> ans;
        vector<int> pos;
        vector<int> neg;
        for (auto it : nums)
        {
            if (it > 0)
            {
                pos.push_back(it);
            }
            else
                neg.push_back(it);
        }

        for (int i = 0; i < nums.size() / 2; i++)
        {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }

        return ans;
    }
};
int main()
{
    // vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> nums = {-11,1};
    vector<int> ans;

    Solution sol;
    ans = sol.rearrangeArray(nums);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}
