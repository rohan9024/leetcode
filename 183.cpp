// 205. Isomorphic Strings
// Strings

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> mp, mp2;
        for (int i = 0; i < s.size(); i++)
        {
            if(mp[s[i]] && mp[s[i]] != t[i]) return false;
            if(mp2[t[i]] && mp2[t[i]] != s[i]) return false;

            mp[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
        return true;
    }
};

int main()
{

    // string s = "foo", t = "bar";
    string s = "bbbaaaba", t = "aaabbbba";
    // string s = "dat", t = "cat";

    Solution sol;
    cout << sol.isIsomorphic(s, t);

    return 0;
}