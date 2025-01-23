// 796. Rotate String
// Strings

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        int n = goal.size();

        string temp = goal;
        for (int i = 0; i < n; i++)
        {
            temp = temp.substr(n - 1) + temp.substr(0, n - 1);

            if (temp == s)
                return true;
        }

        return false;
    }
};

int main()
{

    // string s = "foo", t = "bar";
    string s = "abcde", goal = "abced";
    // string s = "dat", t = "cat";

    Solution sol;
    cout << sol.rotateString(s, goal);

    return 0;
}