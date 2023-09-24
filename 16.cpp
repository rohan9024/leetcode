// Stack
// 739. Daily Temperatures

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int> ans;
        stack<int> st;

        for (int i = temperatures.size() - 1; i >= 0; i--)
        {
            while (!st.empty() && temperatures[st.top()] <= temperatures[i])
            {
                st.pop();
            }
            if (st.size() == 0)
                ans.push_back(0);
            else
                ans.push_back(st.top() - i);
            st.push(i);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{

    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};

    vector<int> ans;
    Solution sol;
    ans = sol.dailyTemperatures(temperatures);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}