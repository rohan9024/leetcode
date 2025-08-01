// 121. Best Time to Buy and Sell Stock

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0, mini = prices[0];

        for (int i = 1; i < prices.size(); i++)
        {
            int cost = prices[i] - mini;
            profit = max(cost, profit);
            mini = min(prices[i], mini);
        }

        return profit;
    }
};

int main()
{
    vector<int> prices = {7,6,4,3,1};

    Solution sol;
    cout << sol.maxProfit(prices);

    return 0;
}
