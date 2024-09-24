// Two pointer approach
// 125. Valid Palindrome
#include <bits/stdc++.h>
using namespace std;

int speedup = []
{std::ios::sync_with_stdio(0);std::cin.tie(0);return 0; }();
class Solution
{
public:
    bool isPalindrome(string s)
    {
        int start = 0;
        int end = s.size() - 1;

        while (start <= end)
        {
            if (!isalnum(s[start]))
            {
                start++;
                continue;
            }
            if (!isalnum(s[end]))
            {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end]))
                return false;
            else
            {
                start++;
                end--;
            }
        }

        return true;
    }
};
int main()
{
    string strs = "tat";
    Solution sol;

    cout << sol.isPalindrome(strs);

    return 0;
}

