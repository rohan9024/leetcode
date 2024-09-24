// Two pointers
// 3. Longest Substring Without Repeating Characters

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> m;

        for (int i = 0; i < nums.size(); i++)
        {
            m[i] = nums[i];
            
        }
        
        return {1,3,4};
    }
};
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 1};
    int target = 3;
    Solution sol;
    vector<int> nums2 = sol.twoSum(nums, target);

    for (auto it : nums2)
    {
        cout << it << endl;
    }

    return 0;
}