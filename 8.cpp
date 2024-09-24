#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.empty())
        {
            return 0;
        }

        int LCS = 1;

        unordered_set<int> ordered_set;

        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] == nums[i] - 1)
            {
                LCS++;
            }
            else if (nums[i - 1] != nums[i] - 1 && LCS > 1)
            {
                ordered_set.insert(LCS);
                LCS = 1;
            }

            // cout << nums[i] << " ";
        }
       return LCS;
    }
};

int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    Solution s;
    cout << s.longestConsecutive(nums);

    return 0;
}