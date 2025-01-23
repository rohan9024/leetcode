// 496. Next Greater Element I
// Hashtable

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        map<int, int> mp;

        for (auto it : nums2)
        {
            mp[it]++;
        }

        for (int i = 0; i < nums1.size(); i++)
        {
            auto it = mp.find(nums1[i]);
            auto elem = mp.upper_bound(it->first);
            if (elem == mp.end())
                ans.push_back(-1);
            else
            {
                ans.push_back(elem->first);
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    vector<int> ans;
    Solution sol;
    ans = sol.nextGreaterElement(nums1, nums2);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}