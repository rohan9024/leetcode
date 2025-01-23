// Find the Smallest Divisor Given a Threshold
// Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfArray(vector<int> &nums, int div)
    {
        int sum = 0;
        for (auto x : nums)
        {
            sum = sum + ceil((double)x / (double)div);
        }

        return sum;
    }

    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int n = nums.size();

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (sumOfArray(nums, mid) <= threshold)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};
int main()
{
    vector<int> nums = {1, 2, 5, 9};
    int th = 6;

    Solution sol;
    cout << sol.smallestDivisor(nums, th);

    return 0;
}
