// 56. Merge Intervals

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();

        int start = intervals[0][0];
        int end = intervals[0][1];

        for (int i = 1; i < n; i++)
        {
            if (intervals[i][0] <= end)
                end = max(intervals[i][1], end);
            else
            {
                ans.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        ans.push_back({start, end});

        return ans;
    }
};

int main()
{
    vector<vector<int>> nums = {
        {2, 6},
        {8, 10},
        {1, 3},
        {15, 18}};
    ;
    vector<vector<int>> ans;

    Solution sol;
    ans = sol.merge(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
