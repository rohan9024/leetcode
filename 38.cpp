#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        int ans = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i, j = 0;

        while (i < g.size())
        {
            while (j < s.size() && g[i]>s[j]){
                j++;
            }
            if()
        }

        return ans;
    }
};

int main()
{
    vector<int> g = {10, 9, 8, 7, 10, 9, 8, 7};
    vector<int> s = {10, 9, 8, 7};

    Solution sol;
    cout << sol.findContentChildren(g, s);

    return 0;
}