// 451. Sort Characters By Frequency
// Strings

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDepth(string s)
    {
        int count = 0;
        int maxi = 0;

        for (char c : s)
        {
            if (c == '(')
            {
                count++;
                maxi = max(maxi, count);
            }
            if (c == ')')
            {
                count--;
            }
        }

        return maxi;
    }
};

int main()
{

    string s = "(1)+(((())))((2))+(((3)))";

    Solution sol;
    cout << sol.maxDepth(s);

    return 0;
}