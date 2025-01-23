// 5. Longest Palindromic Substring
//  Strings

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool solve(string s, int i, int j)
    {
        if (i >= j) return true;
   
        if (s[i] == s[j])
        {
            return  solve(s, i + 1, j - 1);
        }

        return false;
    }
    string longestPalindrome(string s)
    {

        int n = s.size();

        int maxlen = 1;

        int sp = 0;


        if (s.empty())
            return "";

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (solve(s, i, j))
                {
                    if (j - i + 1 > maxlen)
                    {
                        maxlen = j - i + 1;
                        sp = i;
                    }
                }
            }
        }


        return s.substr(sp, maxlen);
    }
};

int main()
{

    string s = "babad";

    Solution sol;
    cout << sol.longestPalindrome(s);

    return 0;
}