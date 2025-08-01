// majority element

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int cnt = 0, el = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (cnt == 0)
            {
                cnt++;
                el = nums[i];
            }
            else if (el == nums[i])
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }

        int mini = (int)(nums.size() / 2) + 1;

        cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (el == nums[i])
                cnt++;
        }
        if (mini <= cnt)
            return el;
        return -1;
    }
};

int main()
{
    vector<int> nums = {6,5,5};

    Solution sol;
    cout << sol.majorityElement(nums);

    return 0;
}
