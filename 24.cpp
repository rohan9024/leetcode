// 2707. Extra Characters in a String

// DP

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minExtraChar(string s, vector<string> &dictionary)
    {
        int maxVal = s.length() + 1;
        vector<int> dp(s.length() + 1, maxVal);
        dp[0] = 0;

        unordered_set<string> dictionary_set(dictionary.begin(), dictionary.end());
        for (int i = 1; i <= s.length(); i++)
        {
            dp[i] = dp[i - 1] + 1;
            for (int l = 1; l <= i; l++)
            {
                if (dictionary_set.find(s.substr(i - l, l)) != dictionary_set.end())
                {
                    dp[i] = min(dp[i - l], dp[i]);
                }
            }
        }

        return dp.back();
    }
};

int main()
{
    string s = "leetscode";
    vector<string> dictionary = {"leet", "code", "leetcode"};

    Solution sol;
    cout << sol.minExtraChar(s, dictionary);

    return 0;
}
