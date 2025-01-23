// Find Minimum in Rotated Sorted Array
// Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {

            int mid = left + (right - left) / 2;

            if(nums[mid] > nums[left])
            {
                
            }
        }
    }
};

int main()
{

    vector<int> nums = {2, 5, 6, 10, 20, 1, 2};

    Solution sol;
    cout << sol.findMin(nums);

    return 0;
}