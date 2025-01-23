// Find Min
// Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int ans = INT_MAX;
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[low] <= nums[mid])
            {
                ans = min(ans, nums[low]);
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
                ans = min(ans, nums[mid]);
            }
        }

        return ans;
    }
};

int main()
{

    vector<int> arr = {40, 50, 10, 20, 30};

    Solution sol;
    cout << sol.findMin(arr);

    return 0;
}