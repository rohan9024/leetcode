// Possible words using phone numbers on dialpad using recursion

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> keys = {
        "",
        " ",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz",
    };
    vector<string> ans;

    void helper(int a[], int n, string temp, int i)
    {
        if (i == n)
        {
            ans.push_back(temp);
            return;
        }

        for (int j = 0; j < keys[a[i]].size(); j++)
        {

            cout << keys[a[i]][j] << " ";
            helper(a, n, temp + keys[a[i]][j], i + 1);
        }
    }
    vector<string> possibleWords(int a[], int n)
    {

        helper(a, n, "", 0);

        return ans;
    }
};

int main()
{

    int n = 3;
    int a[] = {2, 3, 4};
    vector<string> ans;

    Solution sol;
    ans = sol.possibleWords(a, n);

    for (auto str : ans)
    {
        cout << str << " ";
    }

    return 0;
}
