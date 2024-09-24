// 26. Remove Duplicates from Sorted Array
// Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        int j = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[j] = nums[i];
                j++;
            }
        }

        return j;
    }
};
int main()
{
    vector<int> nums = {1, 1, 2};

    Solution sol;
    cout << sol.removeDuplicates(nums);

    return 0;
}