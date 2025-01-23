#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {

        vector<int> ans = {-1, -1};

        int left = 0;
        int right = nums.size() - 1;
        int mid = left + (right - left) / 2;

        while (left <= right)
        {
            mid = left + (right - left) / 2;

            if (nums[mid] == target)
            {
                ans[0] = mid;
                right = mid - 1;
            }
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        left = 0;
        right = nums.size() - 1;

        while (left <= right)
        {
            mid = left + (right - left) / 2;

            if (nums[mid] == target)
            {

                ans[1] = mid;

                left = mid + 1;
            }
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return ans;
    }
};
int main()
{

    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    Solution sol;
    vector<int> ans = sol.searchRange(nums, target);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}