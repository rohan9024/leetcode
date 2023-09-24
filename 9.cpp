#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string con;

        for (char i : s)
        {
            if (isalnum(i) && !isspace(i))
            {
                con += tolower(i);
            }
        }

        string reversed_string = con;
        reverse(reversed_string.begin(), reversed_string.end());

        if (reversed_string == con)
        {
            return true;
        }

        return false;
    }
};

int main()
{
    string s = "0P";
    Solution sol;
    cout << sol.isPalindrome(s);

    return 0;
}