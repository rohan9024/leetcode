// Longest subarray with sum K TUF

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums, int k)
    {
        map<long long, int> preSumMap;
        int presum = 0;
        long long sum = 0;
        int maxlen = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (sum == k)
                maxlen = max(maxlen, i + 1);

            int rem = sum - k;
            if (preSumMap.find(rem) != preSumMap.end())
            {
                int l = i - preSumMap[rem];
                maxlen = max(maxlen, l);
            }

            if (preSumMap.find(sum) == preSumMap.end())
                preSumMap[sum] = i;
        }

        return maxlen;
    }
};

int main()
{
    vector<int> nums = {-3, 2, 1};

    int k = 6;

    Solution sol;
    cout << sol.longestSubarray(nums, k);

    return 0;
}
