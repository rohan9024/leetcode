// 189. Rotate Array

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> ans;
        int n = nums.size();
        k = k % n;

        for (int i = (n - k); i < n; i++)
        {
            ans.push_back(nums[i]);
        }

        for (int i = 0; i < (n - k); i++)
        {
            ans.push_back(nums[i]);
        }
        nums = ans;
    }
};

int main()
{

    vector<int> nums = {-1, -100, 3, 99};

    vector<int> ans;

    Solution sol;
    sol.rotate(nums, 2);

    return 0;
}
