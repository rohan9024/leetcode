// 151. Reverse Words in a String
// Strings


#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> words;
        string ans = "";

        istringstream stream(s);
        string word;

        while (stream >> word)
        {

            string cleaned_word;

            for (char ch : word)
            {
                if (isalnum(ch))
                {
                    cleaned_word += ch;
                }
            }

            if (!cleaned_word.empty())
                words.push_back(cleaned_word);
        }

        for (int i = words.size() - 1; i >= 0; i--)
        {
            if (i > 0)
            {
                ans += words[i];
                ans += " ";
            }
            else
            {
                ans += words[i];
            }
        }

        return ans;
    }
};


// Second approach

class Solution
{
public:
    string reverseWords(string s)
    {
        string ans = "";

        vector<string> ans1;

        string sub = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ' && sub.empty())
                continue;

            else if (s[i] == ' ' && !sub.empty())
            {
                ans1.push_back(sub);
                sub = "";
            }
            else if (s[i] != ' ')
                sub += s[i];

            if (i == s.size() - 1 && !sub.empty())
                ans1.push_back(sub);
        }

        reverse(ans1.begin(), ans1.end());

        for (int i = 0; i < ans1.size(); i++)
        {
            ans += ans1[i];

            if (i < ans1.size() - 1)
                ans += " ";

        }

        return ans;
    }
};


int main()
{

    string s = "    the sky is blue ";

    Solution sol;
    cout << sol.reverseWords(s);

    return 0;
}