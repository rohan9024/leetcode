// A. Word

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    string ans = "";

    int up = 0, down = 0;
    for (char ch : s)
    {
        if (isupper(ch))
        {
            up++;
        }
        else
            down++;
    }

    if (up > down)
    {
        for (char ch : s)
        {
            ans += toupper(ch);
        }
    }
    else
    {
        for (char ch : s)
        {
            ans += tolower(ch);
        }
    }

    cout << ans;
}