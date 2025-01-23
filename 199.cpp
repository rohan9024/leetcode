// 983. Minimum Cost For Tickets
//  Recursion + Memo

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int t[366];

    int solve(vector<int> &days, vector<int> &costs, int n, int i)
    {

        if (t[i] != -1)
            return t[i];
        if (i >= n)
            return 0;

        int cost_1 = costs[0] + solve(days, costs, n, i + 1);

        // 7 Day Pass
        int j = i;
        int maxDay = days[i] + 7;

        while (j < n && days[j] < maxDay)
            j++;

        int cost_2 = costs[1] + solve(days, costs, n, j);

        // 30 Day Pass
        j = i;
        maxDay = days[i] + 30;

        while (j < n && days[j] < maxDay)
            j++;

        int cost_3 = costs[2] + solve(days, costs, n, j);

        return t[i] = min({cost_1, cost_2, cost_3});
    }
    int mincostTickets(vector<int> &days, vector<int> &costs)
    {
        int n = days.size();
        memset(t, -1, sizeof(t));
        return solve(days, costs, n, 0);
    }
};

int main()
{
    vector<int> days = {1, 4, 6, 7, 8, 20};
    vector<int> costs = {2, 7, 15};

    Solution sol;
    cout << sol.mincostTickets(days, costs);

    return 0;
}