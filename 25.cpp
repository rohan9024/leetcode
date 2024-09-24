// 74. Search a 2D Matrix

// Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int last = nums.size() - 1;
        int first = 0;
        int mid = last / 2;


        if (nums[first] == target)
            return first;
        if (nums[last] == target)
            return last;

        while (first < last)
        {
            int mid = first + (last - first) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                first = mid + 1;
            else
                last = mid - 1;
        }

        return first;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 10};

    int target = 2;

    Solution sol;

    cout << sol.searchInsert(nums, target);

    return 0;
}
