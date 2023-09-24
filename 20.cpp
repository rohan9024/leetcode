// Sliding Window

// 121. Best Time to Buy and Sell Stock

// Dynamic programming approach is used

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit=0;
        int mini = prices[0];
        for (auto it: prices)
        {
            profit = max(profit, it-mini);
            mini = min(mini, it);
        }

        return profit;
    }
};

int main()
{

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    Solution sol;
    cout << sol.maxProfit(prices);

    return 0;
}