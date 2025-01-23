// Minimum Number of Days to Make m Bouquets
// Binary Search

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool possible(vector<int> &bloomDay, int k, int num)
    {
        int count = 0;

        for (auto x : bloomDay)
        {
            if (num >= x)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            if (count == k)
                return true;
        }

        return false;
    }
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int n = bloomDay.size();

        if ((n / k) < m)
            return -1;

        cout << possible(bloomDay, k, 10);

        return -1;
    }
};

int main()
{
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3, k = 1;

    Solution sol;
    cout << sol.minDays(bloomDay, m, k);

    return 0;
}
