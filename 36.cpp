// Binary Search

//

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool possible(vector<int> piles, int mid, int h)
    {
        long long hours = 0;

        return true;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {

        int min = 1;
        int max = *max_element(piles.begin(), piles.end());
        int ans = 0;
        while (min <= max)
        {
            int mid = min + (max - min) / 2;
            if (possible(piles, mid, h))
            {
                ans = mid;
                max = mid - 1;
            }
            else
            {
                min = mid - 1;
            }
        }

        return ans;
    }
};

int main()
{

    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    Solution sol;
    cout << sol.minEatingSpeed(piles, h);

    return 0;
}