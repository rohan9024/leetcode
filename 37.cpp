#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool binarySearch(vector<int> &nums, const int &target)
    {

        int low = 0;
        int high = nums.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                return true;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return false;
    }
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            if (binarySearch(nums2, nums1[i]))
            {
                ans.emplace_back(nums1[i]);
            }
            while (i < nums1.size() - 1 && nums1[i] == nums1[i + 1])
                i++;
        }

        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    return 0;
}