// Palindrome using recursion

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int helper(string s, int start, int end)
    {
        if (start >= end)
        {
            return 1;
        }
        if (s[start] != s[end])
        {
            return 0;
        }

        return helper(s, start + 1, end - 1);
    }
    int isPalindrome(string s)
    {
        int n = s.size() - 1;

        return helper(s, 0, n);
    }
};

int main()
{

    string s = "abba";

    Solution sol;
    cout << sol.isPalindrome(s);

    return 0;
}
