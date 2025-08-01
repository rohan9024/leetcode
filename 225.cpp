// Minimum Number of Days to Make m Bouquets
// Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool possible(vector<int> &bloomDay, int m, int k, int num)
    {
        int count = 0;
        int n = 0;
        for (auto x : bloomDay)
        {
            if (x <= num)
                count++;
            else
                count = 0;
            if (count == k)
            {
                n++;
                count = 0;
            }
        }


        if (n >= m)
            return true;
        return false;
    }
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int n = bloomDay.size();

        if ((n / k) < m)
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int mid = low + (high - low) / 2;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (possible(bloomDay, m, k, mid))
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }

        return low;
    }
};

int main()
{
    // vector<int> bloomDay = {1, 10, 3, 10, 2};
    vector<int> bloomDay = {62, 75, 98, 63, 47, 65, 51, 87, 22, 27, 73, 92, 76, 44, 13, 90, 100, 85};
    int m = 2, k = 7;

    Solution sol;
    cout << sol.minDays(bloomDay, m, k);

    return 0;
}
