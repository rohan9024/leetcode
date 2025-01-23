// A. Codeforces Checking

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "codeforces";
    int cnt[26] = {0};
    for (auto it : s)
    {
        cnt[it - 'a']++;
    }

    int n;
    cin >> n;
    while (n--)
    {
        char c;
        cin >> c;
        if (cnt[c - 'a'] == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}