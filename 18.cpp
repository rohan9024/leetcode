// Binary Search

// 704. Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int binarySearch(vector<int> &nums, int high, int low, int target)
    {
        int mid = low + high / 2;

        if (target == nums[mid])
            return mid;

        return -1;
    };
    int search(vector<int> &nums, int target)
    {
        int high = nums.size() - 1;
        int low = 0;
        int mid = low + high / 2;

        if (low > high)
            return -1;

        if (target == nums[mid])
            return mid;

        else if (nums[mid] < target)
            return binarySearch(nums, high, mid + 1, target);

        else
            return binarySearch(nums, mid - 1, low, target);

        return -1;
    }
};

int main()
{

    vector<int> nums = {-1, 0, 3, 5, 9, 12};

    int target = 9;

    Solution sol;
    cout << sol.search(nums, target);

    return 0;
}