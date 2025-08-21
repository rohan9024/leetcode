#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s, int left, int right)
    {
        while (left < right)
        {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }

    void f(string s, int ind, vector<string> &path, vector<vector<string>> &ans)
    {
        if (ind == s.size())
        {
            ans.push_back(path);
            return;
        }
        for (int i = ind; i < s.size(); i++)
        {
            if (isPalindrome(s, ind, i))
            {
                path.push_back(s.substr(ind, i - ind + 1));
                f(s, i + 1, path, ans);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s)
    {

        vector<vector<string>> ans;
        vector<string> path;
        f(s, 0, path, ans);
        return ans;
    }
};

int main()
{

    string s = "aabb";
    Solution sol;

    vector<vector<string>> ans;

    ans = sol.partition(s);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}