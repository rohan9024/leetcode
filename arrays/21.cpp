// 128. Longest Consecutive Sequence

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int longest = 1;
        int n = nums.size();
        if (n == 0)
            return 0;
        unordered_set<int> st;

        for (auto it : nums)
            st.insert(it);

        for (auto it : nums)
        {
            if (st.find(it - 1) == st.end())
            {
                int cnt = 1;
                int x = it;
                while (st.find(x + 1) != st.end())
                {
                    x = x + 1;
                    cnt = cnt + 1;
                }
                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};

int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    vector<int> ans;

    Solution sol;
    cout << sol.longestConsecutive(nums);

    return 0;
}
