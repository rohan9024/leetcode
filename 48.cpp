// 2108. Find First Palindromic String in the Array
// Strings and Two pointer approach

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {
        for (const string& str : words)
        {
            int left = 0;
            int right = str.length() - 1;
            bool flag = true;
            while (left < right)
            {
                if (str[left] != str[right])
                {
                    flag = false;
                }
                left++;
                right--;
            }
            if(flag) return str;
        }
        return "";
    }
};

int main()
{
    vector<string> words = {"abc", "car", "ada", "racecar", "cool"};

    Solution sol;
    cout << sol.firstPalindrome(words);

    return 0;
}