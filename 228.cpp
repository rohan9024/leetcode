// 410. Split Array Largest Sum
// Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int splitPossible(vector<int> &nums, int totalSum)
    {
        int painters = 1;
        long long sumi = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (sumi + nums[i] <= totalSum)
            {
                sumi += nums[i];
            }
            else
            {
                sumi = nums[i];
                painters++;
            }
        }
        return painters;
    }
    int splitArray(vector<int> &nums, int k)
    {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            int splits = splitPossible(nums, mid);
            if (splits > k)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return low;
    }
};

int main()
{
    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;

    Solution sol;
    cout << sol.splitArray(nums, k);
    return 0;
}
