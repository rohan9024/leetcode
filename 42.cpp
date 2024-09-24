// 28. Find the Index of the First Occurrence in a String
// Strings

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        for (int i = 0; i < haystack.size(); i++)
        {
            string temp = haystack.substr(i, needle.size());
            if (temp == needle)
                return i;
        }

        return -1;
    }
};
int main()
{
    string haystack = "sadbutsad";
    string needle = "sad";

    Solution sol;
    cout << sol.strStr(haystack, needle);

    return 0;
}