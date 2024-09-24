// Happy Number

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        unordered_map<char, int> um1;
        unordered_map<char, int> um2;

        for (auto it : s)
        {
            um1[it]++;
        }
        for (auto it : t)
        {
            um2[it]++;
        }

        for (const auto &it : um2)
        {
            if(it != um1.end())
        }
    }
};

int main()
{

    string s = "abcd", t = "abcde";

    Solution sol;
    cout << sol.findTheDifference(s, t);
}