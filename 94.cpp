// 884. Uncommon Words from Two Sentences
// Hashmap

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> uncommonFromSentences(string s1, string s2)
    {
        vector<string> ans;
        unordered_map<string, int> um;

        stringstream ss(s1);
        stringstream ss2(s2);
        string word;

        while (ss >> word)
        {
            um[word]++;
        }

        while (ss2 >> word)
        {
            um[word]++;
        }

        for (const auto &pair : um)
        {
            if (pair.second == 1)
                ans.push_back(pair.first);
        }

        return ans;
    }
};
int main()
{

    string s1 = "apple apple", s2 = "banana";

    vector<string> ans;

    Solution sol;

    ans = sol.uncommonFromSentences(s1, s2);

    for (const auto &it : ans)
    {
        cout << it << " ";
    }

    return 0;
}
