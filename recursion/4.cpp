// fibonacci using recursion

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int func(int n)
    {
        if (n <= 1)
            return 1;

        int last = func(n - 1);
        int slast = func(n - 2);

        return last + slast;
    }
};

int main()
{

    int n = 5;

    Solution sol;
    cout << sol.func(6);

    return 0;
}