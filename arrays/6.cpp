// Linear search TUF

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int linearSearch(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
                return i;
        }

        return -1;
    }
};

int main()
{

    vector<int> nums = {0, 12, 0, 13, 1};
    int target = 1;

    Solution sol;
    cout << sol.linearSearch(nums, target);


    return 0;
}
