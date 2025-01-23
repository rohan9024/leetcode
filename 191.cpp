// Substrings with K Distinct
//  Strings

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSubstr(string &s, int k)
    {
        int ans = 0;

        int n = s.size();

        int cnt[26];

        for (int i = 0; i < n; i++)
        {
            int dist_count = 0;

            memset(cnt, 0, sizeof(cnt));
            for (int j = i; j < n; j++)
            {
                if (cnt[s[j] - 'a'] == 0)
                    dist_count++;
                cnt[s[j] - 'a']++;

                if (dist_count == k)
                    ans++;
                if (dist_count > k)
                    break;
            }
        }

        return ans;
    }
};

int main()
{

    string s = "abaaca";
    int k = 1;

    Solution sol;
    cout << sol.countSubstr(s, k);

    return 0;
}