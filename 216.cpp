// B. Chemistry

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> mp;
        for (auto it : s)
        {
            mp[it]++;
        }
        int odds = 0;
        for (const auto &it : mp)
        {
            if (it.second % 2 != 0)
                odds++;
        }

        if (k < odds - 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}