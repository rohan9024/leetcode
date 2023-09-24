// Stack
// 22. Generate Parentheses

// Note: I have used recursion.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<string> ans;

    void workfunc(int noOfOpeningBrackets, int noOfClosingBrackets, string s)
    {
        if (noOfOpeningBrackets == 0 && noOfClosingBrackets == 0)
        {
            ans.push_back(s);
            return;
        }

        if (noOfOpeningBrackets < noOfClosingBrackets)
        {
            workfunc(noOfOpeningBrackets, noOfClosingBrackets - 1, s + ')');
        }
        if (noOfOpeningBrackets > 0)
            workfunc(noOfOpeningBrackets - 1, noOfClosingBrackets, s + '(');
    };

public:
    vector<string> generateParenthesis(int n)
    {
        workfunc(n, n, "");
        return ans;
    }
};

int main()
{

    int n = 3;
    vector<string> ans;
    Solution sol;
    ans = sol.generateParenthesis(n);

    for (auto i : ans)
    {
        cout << i <<  " ";
    }

    return 0;
}