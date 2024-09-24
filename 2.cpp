#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.size() != t.size())
            return false;

        unordered_map<char, int> um1;
        unordered_map<char, int> um2;

        for (auto index : s)
        {
            ++um1[index];
        }

        for (auto index : t)
        {
            ++um2[index];
        }

        return um1 == um2;

    }
};

int main()
{
    string s = "ccac";
    string t = "aacc";

    Solution sol;
    cout << sol.isAnagram(s, t);
    // 0 --> false
    // 1 --> true
    return 0;
}