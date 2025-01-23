// String to Integer (atoi)
//  Strings

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        long long int num = 0;

        bool sign = false;
        bool prevSign = false;
        bool zero = false;

        for (int i = 0; i < s.size(); i++)
        {
            if (num > INT_MAX && !sign)
                return INT_MAX;
            else if (num > 2147483648 && sign)
                return INT_MIN;

            if (s[i] == ' ' && !prevSign && !zero && num == 0)
                continue;
            else if (s[i] == ' ' && !prevSign && zero && num == 0)
                return 0;
            else if (s[i] == ' ' && !prevSign && zero && num > 0)
                return 0;

            else if ((s[i] == '-') && !zero && !prevSign && !(num > 0))
            {
                prevSign = true;
                sign = true;
            }

            else if (s[i] == '+' && !zero && !prevSign && !(num>0))
            {
                prevSign = true;
                continue;
            }
            else if (s[i] == '0' && num == 0)
            {
                zero = true;
            }
            else if (s[i] >= '0' && s[i] <= '9')
                num = num * 10 + (s[i] - '0');
            else
                break;
        }

        // sign ko assign karo
        if (sign)
            num = 0 - num;

        if (num > INT_MAX)
            return INT_MAX;
        else if (num < INT_MIN)
            return INT_MIN;

        return num;
    }
};

int main()
{

    string s = "123-";

    Solution sol;
    cout << sol.myAtoi(s);
    return 0;
}