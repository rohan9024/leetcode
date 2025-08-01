// Remove duplicates from sorted array

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        int ans = 0;

        int i = 0;

        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[i] != nums[j])
            {
                nums[i + 1] = nums[j];
                i++;
            }
        }

        return (i + 1);
    }
};

int main()
{

    vector<int> nums = {0, 0, 3, 3, 5, 6};

    Solution sol;
    cout << sol.removeDuplicates(nums);

    return 0;
}