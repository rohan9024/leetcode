// 69. Sqrt(x)

// Binary search

#include <iostream>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0 || x == 1)
            return x;

        int low = 1;
        int high = x;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            long long square = static_cast<long long>(mid)* mid;

            if (square == x)
                return mid;
            else if (square > x)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return high;
    }
};

int main()
{
    int x = 8;
    Solution sol;
    cout << sol.mySqrt(x);  // Output: 2
    return 0;
}
