// Stack
// 150. Evaluate Reverse Polish Notation

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsNearbyAlmostDuplicate(vector<int> &nums, int indexDiff, int valueDiff)
    {

        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = 1; j < nums.size(); j++)
            {
                if (i != j && abs(i - j) <= indexDiff && abs(nums[i] - nums[j]) <= valueDiff)
                {
                    cout << i << " " << j << endl;
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{

    vector<int> nums = {1,5,9,1,5,9};

    int indexDiff = 2, valueDiff = 3;

    Solution sol;
    cout << sol.containsNearbyAlmostDuplicate(nums, indexDiff, valueDiff);

    return 0;
}