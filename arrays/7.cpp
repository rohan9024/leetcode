// Union of two sorted arrays TUF

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> s1;

        for (int i = 0; i < nums1.size(); i++)
        {
            s1.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            s1.insert(nums2[i]);
        }
        vector<int> ans(s1.begin(), s1.end());

        return ans;
    }
};

int main()
{

    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {4,4,2,5, 6, 7};
    vector<int> ans;

    Solution sol;
    ans = sol.unionArray(nums1, nums2);

    for (auto it : ans)
    {
        cout << it << endl;
    }

    return 0;
}
