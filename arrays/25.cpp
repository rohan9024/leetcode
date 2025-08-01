// 229. Majority Element II

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans;
        int cnt1 = 0, cnt2 = 0, el1 = INT_MIN, el2 = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (cnt1 == 0 && el2 != nums[i])
            {
                cnt1++;
                el1 = nums[i];
            }
            else if (cnt2 == 0 && el1 != nums[i])
            {
                cnt2++;
                el2 = nums[i];
            }
            else if (el1 == nums[i])
            {
                cnt1++;
            }
            else if (el2 == nums[i])
            {
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }

        int mini = (int)(n / 3) + 1;
        cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (el1 == nums[i])
                cnt1++;
            else if (el2 == nums[i])
                cnt2++;
        }
        if (cnt1 >= mini)
            ans.push_back(el1);
        if (cnt2 >= mini)
            ans.push_back(el2);

        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    vector<int> nums = {3, 3, 4};
    vector<int> ans;

    Solution sol;
    ans = sol.majorityElement(nums);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}
