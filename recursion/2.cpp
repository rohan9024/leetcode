// 50. Pow(x, n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1.0;
        long long nn = n;
        if (nn < 0)
            nn = -1 * nn;

        while (nn)
        {
            if (nn % 2)
            {
                ans = ans * x;
                nn--;
            }
            else
            {
                x = x * x;
                nn = nn / 2;
            }
        }
        if (n < 0)
            ans = (double)(1.0) / (double)(ans);
        return ans;
    }
};

int main()
{

    double x = 2.0;
    int n = 5;

    Solution sol;
    cout << sol.myPow(x, n);

    return 0;
}
