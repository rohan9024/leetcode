// Search in Rotated Sorted Array II
// Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return 1;
            else if (nums[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }

        return 0;
    }
};

int main()
{

    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 2;

    Solution sol;
    cout << sol.search(nums, target);

    return 0;
}