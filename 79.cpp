// 1598. Crawler Log Folder
// Stack

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<string> &logs)
    {
        stack<string> st;

        for (int i = 0; i < logs.size(); i++)
        {
            if (logs[i] == "../" && st.empty())
                continue;
            if (logs[i] == "./")
                continue;
            else if (logs[i] == "../" && !st.empty())
                st.pop();
            else
                st.push(logs[i]);
        }

        return st.size();
    }
};
int main()
{
    vector<string> logs = {"./", "../", "./"};
    vector<int> ans;

    Solution sol;
    cout << sol.minOperations(logs);

    return 0;
}