// Aggressive Cows
// Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool placeCow(vector<int> &stalls, int cows, int dist)
    {

        int countCows = 1, last = stalls[0];
        for (int j = 1; j < stalls.size(); j++)
        {
            if (stalls[j] - last >= dist)
            {
                countCows++;
                last = stalls[j];
            }
            if (countCows >= cows)
                return true;
        }

        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k)
    {
        int n = stalls.size();

        sort(stalls.begin(), stalls.end());

        int low = 1;
        int high = stalls[n - 1] - stalls[0];

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (!placeCow(stalls, k, mid))
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }

        return high;
    }
};

int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int cows = 4;

    Solution sol;
    cout << sol.aggressiveCows(stalls, cows);

    return 0;
}
