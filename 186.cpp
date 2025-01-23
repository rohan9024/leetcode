// B. Replace Character

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        map<char, int> mp;
        for (char it : s)
        {
            mp[it]++;
        }

        int maxi = INT_MIN, mini = INT_MAX;

        char maxC, minC;

        for (const auto &pair : mp)
        {
            if (pair.second >= maxi)
            {
                maxi = pair.second;
                maxC = pair.first;
            }
            if (pair.second < mini)
            {
                mini = pair.second;
                minC = pair.first;
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == minC)
            {
                s[i] = maxC;
                break;
            }
        }

        cout << s << endl;
    }

    return 0;
}