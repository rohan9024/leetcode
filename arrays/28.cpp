// Largest Subarray with Sum 0 TUF

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxLen(vector<int> &arr)
    {
        int n = arr.size();

        map<int, int> mp;

        int maxi = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum == 0)
                maxi = i + 1;
            else
            {
                if (mp.find(sum) != mp.end())
                {
                    maxi = max(maxi, i - mp[sum]);
                }
                else
                {
                    mp[sum] = i;
                }
            }
        }

        return maxi;
    }
};

int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};

    Solution sol;
    cout << sol.maxLen(nums);

    return 0;
}
