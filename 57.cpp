// Reverse the string using recursion

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string helper(string s, int start, int end)
    {
        if (start >= end)
        {
            return s;
        }

        char temp;
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        return helper(s, start + 1, end - 1);
    }
    string reverseString(string s)
    {
        int n = s.size() - 1;

        return helper(s, 0, n);
    }
};

int main()
{

    string s = "rohan";

    Solution sol;
    cout << sol.reverseString(s);

    return 0;
}
