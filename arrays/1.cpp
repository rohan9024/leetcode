// Largest element

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestElement(vector<int> &nums)
    {

        int ans = nums[0];

        for (int i = 0; i < nums.size(); i++)
        {
            ans = max(nums[i], ans);
        }

        return ans;
    }
};

int main()
{

    vector<int> nums = {3, 40, 5, 6, 2, 10};

    Solution sol;
    cout << sol.largestElement(nums);

    return 0;
}