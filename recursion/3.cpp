// check palindrome using recursion

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int func(string s, int i)
    {

        int n = s.size();

        if (i >= n / 2)
            return true;

        if (s[i] != s[n - i - 1])
            return false;

        return func(s, i + 1);
    }
};

int main()
{

    string s = "MADAM";

    Solution sol;
    cout << sol.func(s, 0);

    return 0;
}