// Boys and Girls

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = 0;

    unordered_map<char, int> um;

    for (auto it : s)
    {
        um[it]++;
    }

    for (const auto &pair : um)
    {
        if (pair.second)
            ans++;
    }

    if (ans % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}