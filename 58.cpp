// power set using recursion

// Display the vector with all set of sequences

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> ans;

    void helper(string s, string tempAns, int i)
    {
        if (s.size() == i)
        {
            ans.push_back(tempAns);
            return;
        }

        helper(s, tempAns + s[i], i + 1);
        helper(s, tempAns, i + 1);

        return;
    }

    vector<string> allPossibleStrings(string s)
    {
        helper(s, "", 0);
        return ans;
    }
};

int main()
{

    string s = "ajk";
    vector<string> ans;

    Solution sol;
    ans = sol.allPossibleStrings(s);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
