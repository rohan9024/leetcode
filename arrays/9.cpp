// 485. Max Consecutive Ones

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int n = nums.size();

        int count = 0;
        int maxCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                count++;
                maxCount = max(maxCount, count);
            }
            else
                count = 0;
        }

        return maxCount;
    }
};

int main()
{
    vector<int> nums = {0};

    Solution sol;
    cout << sol.findMaxConsecutiveOnes(nums);

    return 0;
}
