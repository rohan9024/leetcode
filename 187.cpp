// 451. Sort Characters By Frequency
// Strings

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string frequencySort(string s)
    {
        string ans = "";
        map<char, int> mp;
        for (auto it : s)
        {
            mp[it]++;
        }

        vector<pair<char, int>> freqVec(mp.begin(), mp.end());

        sort(freqVec.begin(), freqVec.end(), [](const pair<char, int> &a, const pair<char, int> &b)
             { return a.second > b.second; });

        for (const auto &pair : freqVec)
        {
            int value = pair.second;
            while (value--)
                ans += pair.first;
        }

        return ans;
    }
};

int main()
{

    // string s = "foo", t = "bar";
    string s = "tree";

    Solution sol;
    cout << sol.frequencySort(s);

    return 0;
}