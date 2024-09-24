#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        if (s.length() % 2 != 0 || s.empty())
        {
            return false;
        }
        stack<char> st;
        for (char c : s)
        {
            if (c == '{' || c == '(' || c == '[')
                st.push(c);
            else
            {
                if (st.empty() ||
                    (c == '}' && st.top() != '{' || c == ']' && st.top() != '[' || c == ')' && st.top() != '('))
                {
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};

int main()
{

    string s = "[]";
    Solution sl;
    cout << sl.isValid(s);

    return 0;
}