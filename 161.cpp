#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int ans = 0;

        vector<int> temp;
        temp.push_back(nums[0]);

        int len = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > temp.back())
            {
                temp.push_back(nums[i]);
                len++;
            }
            else
            {
                int ind = lower_bound(temp.begin(), temp.end(), nums[i]) - temp.begin();
                temp[ind] = nums[i];
            }
        }

        return len;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    Solution sol;
    cout << sol.lengthOfLIS(nums);
    return 0;
}