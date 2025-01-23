// 1781. Sum of Beauty of All Substrings
//  Strings

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int beautySum(string s)
    {
        int ans = 0;

        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            int cnt[26] = {};
            for (int j = i; j < n; j++)
            {
                cnt[s[j] - 'a']++;
                int maxi = INT_MIN;
                int mini = INT_MAX;

                for (int k = 0; k < 26; k++)
                {
                    if (cnt[k] > 0)
                    {
                        mini = min(mini, cnt[k]);
                        maxi = max(maxi, cnt[k]);
                    }
                }

                ans += (maxi - mini);
            }
        }

        return ans;
    }
};

int main()
{

    string s = "aabcb";

    Solution sol;
    cout << sol.beautySum(s);

    return 0;
}