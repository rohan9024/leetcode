// 1011. Capacity To Ship Packages Within D Days

// Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPossible(vector<int> &weights, int n, int m, int mid)
    {
        int daysCount = 1;
        int shipSum = 0;
        for (int i = 0; i < n; i++)
        {
            if (weights[i] > mid)
                return false;
            if (weights[i] + shipSum > mid)
            {
                daysCount++;
                shipSum = weights[i];
                if (daysCount > m)
                    return false;
            }
            else
            {
                shipSum += weights[i];
            }
        }

        return true;
    }
    int shipWithinDays(vector<int> &weights, int days)
    {
        int start = 0;
        int n = weights.size();
        int maxWeight = accumulate(weights.begin(), weights.end(), 0);
        int end = maxWeight;
        int ans = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (isPossible(weights, n, days, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    Solution sol;
    cout << sol.shipWithinDays(weights, days);
    return 0;
}