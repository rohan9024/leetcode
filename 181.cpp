// 1903. Largest Odd Number in String
// Strings

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string largestOddNumber(string num)
    {

        string ans = "";

        int index = INT_MIN;

        if (num[num.size() - 1] % 2 != 0)
            return num;
        for (int i = 0; i < num.size(); i++)
        {
            if (num[i] % 2 != 0)
                index = i;
        }

        if (index > INT_MIN)
            return num.substr(0, index + 1);

        return ans;
    }
};

int main()
{

    string s = "35427";

    Solution sol;
    cout << sol.largestOddNumber(s);

    return 0;
}