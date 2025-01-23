// Square Root
// Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int floorSqrt(int n)
    {

        // Naive Approach
        // for (int i = 1; i <= n; i++)
        // {
        //     int num = i * i;

        //     if (num == n)
        //         return i;
        //     if (num > n)
        //         return i - 1;
        // }

        // Binary Search

        int low = 1;
        int high = n;

            int mid = low + (high - low) / 2;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (mid * mid == n)
            {
                return mid;
            }
            else if (mid * mid > n)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low-1;
    }
};
int main()
{

    int num = 36;

    Solution sol;
    cout << sol.floorSqrt(num);

    return 0;
}