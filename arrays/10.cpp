// 136. Single Number

#include <bits/stdc++.h>
using namespace std;

// Using hashmap
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        unordered_map<int, int> um;

        for (auto it : nums)
        {
            um[it]++;
        }

        for (auto it : um)
        {
            if (it.second == 1)
                return it.first;
        }

        return -1;
    }
};



int main()
{
    vector<int> nums = {2, 2, 1, 3, 3, 33, 3, 4};

    Solution sol;
    cout << sol.singleNumber(nums);

    return 0;
}
