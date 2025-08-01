// sum of even fib numbers

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evenFib(int n)
    {
        int ans = 0;
        int curr = 0;

        int prev1 = 1;
        int prev2 = 1;

        for (int i = 2; i < n; i++)
        {
            curr = prev1 + prev2;
            if (curr % 2 == 0)
            {
                cout << curr << endl;
                ans = ans + curr;
            }
            prev1 = prev2;
            prev2 = curr;
        }

        return ans;
    }
};

int main()
{
    int n = 5;

    Solution sol;
    cout << sol.evenFib(n);

    return 0;
}
