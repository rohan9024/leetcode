// search in rotated sorted array using binary search

// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int search(vector<int> &nums, int target)
//     {
//         int low = 0;
//         int high = nums.size() - 1;
//         while (low <= high)
//         {
//             int mid = (low + high) / 2;

//             if (nums[mid] == target)
//             {
//                 return mid;
//             }

//             // Identify the sorted half

//             // left sort
//             if (nums[low] <= nums[mid])
//             {
//                 if (nums[low] <= target && target <= nums[mid])
//                     high = mid - 1;
//                 else
//                     low = mid + 1;
//             }
//             // right sort
//             else
//             {
//                 if (nums[mid] <= target && target <= nums[high])
//                     low = mid + 1;
//                 else
//                     high = mid - 1;
//             }
//         }

//         return -1;
//     }
// };
// int main()
// {
//     vector<int> nums = {5, 1, 3};

//     int target = 0;
//     Solution sol;

//     cout << sol.search(nums, target);

//     return 0;
// }

// find peak element

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size() - 1;

        if (nums.size() == 1)
            return 0;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (mid == 0 && nums[mid] > nums[mid + 1])
                return mid;

            else if (mid == nums.size() - 1 && nums[mid] > nums[mid - 1])
                return mid;

            if ((nums[mid - 1] < nums[mid]) && (nums[mid] > nums[mid + 1]))
                return mid;

            else if ((nums[mid - 1] > nums[mid]) && (nums[mid] > nums[mid + 1]))
                high = mid - 1;
            else
                low = mid + 1;
        }

        return -1;
    }
};
int main()
{
    vector<int> nums = {1, 2};

    Solution sol;

    cout << sol.findPeakElement(nums);

    return 0;
}
