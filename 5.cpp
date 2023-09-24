#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        // map<int, int> occurrences;
        unordered_map<int, int> um;
        vector<int, int> v1;
        for (int x : nums)
        {
            um[x]++;
        }

        for (const auto &pair : um)
        {
            if (pair.second >= k)
                v1.push_back(pair.first, pair.second);
        }

        return v1;
    }
};

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    Solution s;

    vector<int> ans = s.topKFrequent(nums, k);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}