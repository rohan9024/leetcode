// Fibonacci series

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int fib(int n)
    {
        if (n == 0)
        {
            return n;
        }
        if (n == 1)
        {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }
};

int main()
{

    Solution sol;
    cout << sol.fib(5);

    return 0;
}
