// Stack
// 150. Evaluate Reverse Polish Notation

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> s1;
        int result = 0;

        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" || tokens[i] == "*")
            {
                // exp = "(" + tokens[i - 1] + tokens[i] + tokens[i + 1] + ")";
                // s1.pop();
                // s1.push(exp);
                int val1 = s1.top();
                s1.pop();
                int val2 = s1.top();
                s1.pop();

                if (tokens[i] == "+")
                    result = val1 + val2;
                else if (tokens[i] == "-")
                    result = val2 - val1;
                else if (tokens[i] == "/")
                    result = val2 / val1;
                else
                    result = val1 * val2;

                s1.push(result);
            }
            else
            {
                s1.push(stoi(tokens[i]));
            }
        }

        return s1.top();
    }
};

int main()
{

    vector<string> tokens = {"4", "13", "5", "/", "+"};

    Solution sol;
    cout << sol.evalRPN(tokens);

    return 0;
}