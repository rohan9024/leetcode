// Koko Eating Bananas
// Binary Search



#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {

        sort(piles.begin(), piles.end());

        int low = 1;
        int high = piles[piles.size() - 1];

        while (low <= high)
        {
        }
        return -1;
    }
};
int main()
{
    vector<int> piles = {3, 6, 7, 11};
    int h = 10;

    Solution sol;
    cout << sol.minEatingSpeed(piles, h);

    return 0;
}
