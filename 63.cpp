// 1512. Number of Good Pairs
// Hashmaps

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int ans = 0;

        unordered_map<int, int> um1;

        for (auto num : nums)
        {
            um1[num]++;
        }
        for (const auto &num : um1)
        {
            if (num.second > 1)
            {
                ans += num.second - 1;
            }
        }

        return ans;
    }
};

int main()
{

    vector<int> nums = {1, 2, 3, 1, 2, 3};

    Solution sol;
    cout << sol.numIdenticalPairs(nums);

    return 0;
}
