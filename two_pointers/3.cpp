// Two pointers
// 3. Longest Substring Without Repeating Characters

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        int l = 0, r = 0, maxlen = 0;

        int n = s.size();

        for (int i = 0; i < s.size(); i++)
        {
            int hash[256];
            fill(hash, hash + 256, -1);

            while (r < n)
            {
                if (hash[s[r]] != -1)
                {

                    if (hash[s[r]] >= l)
                    {
                        l = hash[s[r]] + 1;
                    }
                }

                int len = r - l + 1;

                maxlen = max(maxlen, len);

                hash[s[r]] = r;
                r++;
            }
        }

        return maxlen;
    }
};

int main()
{
    string str = "abljaaabcbb";

    Solution sol;
    cout << sol.lengthOfLongestSubstring(str) << endl;

    return 0;
}