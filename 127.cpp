// Missing Number

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {

        int n = nums.size();

        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int i = 1; i < nums.size(); i++)
        {
            actualSum += nums[i];
        }

        return expectedSum - actualSum;
    }
};

int main()
{
    vector<int> nums = {1, 0, 3};

    Solution sol;
    cout << sol.missingNumber(nums);

    return 0;
}