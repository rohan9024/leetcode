// 46. Permutations
// Backtracking

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();

        unordered_map<int, int> um1;
        for (int num : nums)
        {
            um1[num]++;
        }
        n = n / 2;
        for (const auto &pair : um1)
        {
            if (pair.second > n)
            {
                return pair.first;
            }
        }

        return 0;
    }
};

int main()

{
    vector<int> nums = {6, 5, 5};
    vector<vector<int>> ans;

    Solution sol;
    cout << sol.majorityElement(nums);

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