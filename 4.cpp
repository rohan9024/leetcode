// Group anagrams

#include <bits/stdc++.h>
using namespace std;

int speedup = []
{std::ios::sync_with_stdio(0);std::cin.tie(0);return 0; }();
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> hash;
        for (auto &s : strs)
        {
            string f = s;
            sort(f.begin(), f.end());
            hash[f].push_back(s);
        }

        // Printing the hashtable for better understanding
        // for (auto it = hash.begin(); it != hash.end(); ++it)
        // {
        //     cout << "Key: " << it->first << ", Values:";
        //     for (auto &str : it->second)
        //     {
        //         cout << " " << str;
        //     }
        //     cout << endl;
        // }

        vector<vector<string>> result;

        for (auto &[k, v] : hash)
        {
            result.push_back(v);
        }

        return result;
    }
};

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution sol;

    vector<vector<string>> result;

    sol.groupAnagrams(strs);

    return 0;
}