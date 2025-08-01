// two sum

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> um;
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if (um.count(diff))
            {
                return um[diff], i
            };
        }

        um[nums[i]] = i;
    }

    return {};
};

int main()
{
    vector<int> nums = {2, 7, 11, 15};

    int k = 9;

    Solution sol;
    sol.twoSum(nums, k);

    return 0;
}
