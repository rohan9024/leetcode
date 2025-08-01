// 53. Maximum Subarray (Kadane Algo)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        int n = nums.size();

        int sum = 0, maxi = INT_MIN;
        int start = 0;
        int ansStart = 0;
        int ansEnd = 0;

        for (int i = 0; i < n; i++)
        {
            if (sum == 0)
                start = i;

            sum += nums[i];

            if (sum > maxi)
            {
                maxi = sum;
                ansStart = start, ansEnd = i;
            }

            if (sum < 0)
                sum = 0;
        }

        return maxi;
    }
};

int main()
{
    vector<int> nums = {-1};

    Solution sol;
    cout << sol.maxSubArray(nums);

    return 0;
}
