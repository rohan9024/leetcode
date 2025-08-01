// 283. Move Zeroes

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        if (nums.size() == 1)
            return;
        else
        {
            int n = nums.size();
            vector<int> ans;

            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] != 0)
                    ans.push_back(nums[i]);
            }
            int remaining = nums.size() - ans.size();

            while (remaining--)
            {
                ans.push_back(0);
            }

            nums = ans;
        }
    }
};

int main()
{

    vector<int> nums = {0, 1, 0, 13, 1};
    // vector<int> nums = {0};

    vector<int> ans;

    Solution sol;
    sol.moveZeroes(nums);

    for (auto it : nums)
    {
        cout << it << endl;
    }

    return 0;
}
