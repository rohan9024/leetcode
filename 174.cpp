// 1752. Check if Array Is Sorted and Rotated

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[(i + 1) % n])
            {
                cout << nums[i] << "  " << nums[i + 1] << " " << nums[(i + 1) % n] << endl;
                count++;
            }
        }

        return count <= 1;
    }
};

int main()
{
    // vector<int> nums = {3, 4, 5, 1, 2};
    // vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> nums = {2, 1, 3, 4};
    Solution sol;
    cout << sol.check(nums) << endl;
    return 0;
}
