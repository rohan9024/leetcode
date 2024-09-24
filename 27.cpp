// 383. Ransom Note

// hash maps

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> m;
        for (auto it : magazine)
        {
            m[it]++;
        }

        for (auto it : ransomNote)
        {
            --m[it];
            if (m[it] < 0)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    string magazine = "aa";
    string ransomNote = "aab";

    Solution sol;
    cout << sol.canConstruct(ransomNote, magazine);

    return 0;
}