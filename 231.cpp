#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int secondLargestElement(vector<int> &nums)
    {
        map<int, int> um;
        for (auto it : nums)
        {
            um[it]++;
        }

        if (um.size() < 2)
            return -1;

        auto it = um.rbegin();
        auto it2 = --it;

   
        return it2->first;
    }
};

int main()
{

    vector<int> nums = {10, 23, 33};
    Solution sol;
    cout << sol.secondLargestElement(nums);

    return 0;
}