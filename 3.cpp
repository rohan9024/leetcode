#include <bits/stdc++.h>
using namespace std;
#define MAX 999
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int a = 0, b = 0;
        for (int i = 0; i < nums.size(); i++)
        {

            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    a = i;
                    b = j;
                    break;
                }
            }
        }

        return {a, b};
    }
};

int main()
{
    vector<int> nums = {3, 2, 3};
    int target = 6;

    Solution sol;
    vector<int> sums = sol.twoSum(nums, target);

    for (int i : sums)
    {
        cout << i << " ";
    }

    // 0 --> false
    // 1 --> true
    return 0;
}