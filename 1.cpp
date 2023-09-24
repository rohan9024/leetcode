#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> numSet(nums.begin(), nums.end());
        return numSet.size() != nums.size();
    }
};

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 4};
    Solution s;
    cout << s.containsDuplicate(v1);
    // 0 --> false
    // 1 --> true
    return 0;
}