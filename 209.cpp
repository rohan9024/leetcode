// nth root of m
// Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int nthRoot(int n, int m)
    {
        int low = 1;
        int high = m;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (pow(mid, n) == m)
                return mid;
            else if (pow(mid, n) > m)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return -1;
    }
};
int main()
{

    int m = 28;
    int n = 3;

    Solution sol;
    cout << sol.nthRoot(n, m);

    return 0;
}
