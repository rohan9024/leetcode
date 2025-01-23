// 13. Roman to Integer
// Strings

#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     int romanToInt(string s)
//     {
//         int count = 0;
//         int n = s.size();

//         int i = 0;
//         while (i < n)
//         {
//             if (i < n - 1)
//             {
//                 if (s[i] == 'I' && s[i + 1] == 'V')
//                 {
//                     count += 4;
//                     i += 2;
//                     continue;
//                 }
//                 else if (s[i] == 'I' && s[i + 1] == 'X')
//                 {
//                     count += 9;
//                     i += 2;
//                     continue;
//                 }
//                 else if (s[i] == 'X' && s[i + 1] == 'L')
//                 {
//                     count += 40;
//                     i += 2;
//                     continue;
//                 }
//                 else if (s[i] == 'X' && s[i + 1] == 'C')
//                 {
//                     count += 90;
//                     i += 2;
//                     continue;
//                 }

//                 else if (s[i] == 'C' && s[i + 1] == 'D')
//                 {
//                     count += 400;
//                     i += 2;
//                     continue;
//                 }
//                 else if (s[i] == 'C' && s[i + 1] == 'M')
//                 {
//                     count += 900;
//                     i += 2;
//                     continue;
//                 }
//             }

//             if (s[i] == 'I')
//                 count += 1;
//             else if (s[i] == 'V')
//                 count += 5;
//             else if (s[i] == 'X')
//                 count += 10;
//             else if (s[i] == 'L')
//                 count += 50;
//             else if (s[i] == 'C')
//                 count += 100;
//             else if (s[i] == 'D')
//                 count += 500;
//             else if (s[i] == 'M')
//                 count += 1000;

//             i++;
//         }

//         return count;
//     }
// };

class Solution
{
public:
    int romanToInt(string s)
    {
        int count = 0;
        int n = s.size();

        unordered_map<char, int> um;
        um['I'] = 1;
        um['V'] = 5;
        um['X'] = 10;
        um['L'] = 50;
        um['C'] = 100;
        um['D'] = 500;
        um['M'] = 1000;

        for (int i = 0; i < n; i++)
        {
            if (i + 1 < n && um[s[i]] < um[s[i + 1]])
            {
                count -= um[s[i]];
            }
            else
            {
                count += um[s[i]];
            }
        }

        return count;
    }
};

int main()
{

    string s = "MCMXCIV";

    Solution sol;
    cout << sol.romanToInt(s);

    return 0;
}