#include <bits/stdc++.h>
using namespace std;

class MinStack
{
public:
    stack<int> s1;
    stack<int> s2;

    void push(int val)
    {
        s1.push(val);
        if (s2.empty() || val <= getMin())
            s2.push(val);
    }

    void pop()
    {
        if (s1.top() == s2.top())
            s2.pop();
        s1.pop();
    }

    int top()
    {
        return s1.top();
    }

    int getMin()
    {
        return s2.top();
    }
};

int main()
{
    vector<int> numbers = {-1, 0, 1, 2, -1, -4};
    // vector<int> numbers = {0, 1, 1};
    vector<vector<int>> result;

    MinStack s;
    s.push(10);

    for (const auto &row : result)
    {
        for (int element : row)
        {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
