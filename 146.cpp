// Floor in a Sorted Array
// Binary search
// GFG


#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int findFloor(vector<long long> &v, long long n, long long x)
    {
        long long left = 0;
        long long right = n - 1;

        long long ans = -1;

        while (left <= right)
        {
            long long mid = left + (right - left) / 2;

            if (v[mid] <= x)
            {
                ans = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return ans;
    }
};
int main()
{
    vector<long long> nums = {1, 2, 8, 10, 11, 12, 19};

    long long n = nums.size();
    long long x = 5;

    Solution sol;
    cout << sol.findFloor(nums, n, x);

    return 0;
}