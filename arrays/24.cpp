// 560. Subarray Sum Equals K

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> subNum;
        subNum[0] = 1;

        int total = 0, count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            total = total + nums[i];
            if (subNum.find(total - k) != subNum.end())
            {
                count += subNum[total - k];
            }
            subNum[total]++;
        }

        return count;
    }
};

int main()
{
    vector<int> nums = {1, 1, 1};
    int k = 2;

    Solution sol;
    cout << sol.subarraySum(nums, k);

    return 0;
}
