// Sliding Window

// 3. Longest Substring Without Repeating Characters


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<char> s1;
        priority_queue<int> s2;

        if (s.empty())
            return 0;
        
        for (auto it : s)
        {
            if (s1.find(it) != s1.end())
            {
                s2.push(s1.size());
                s1.clear();
                s1.insert(it);
                continue;
            }
            else
            {
                s1.insert(it);
            }
        }

        return s2.top();
    }
};

int main()
{

    string s = " ";

    Solution sol;
    cout << sol.lengthOfLongestSubstring(s);

    return 0;
}