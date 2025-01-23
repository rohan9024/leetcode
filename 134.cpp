// A. Magnets

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans = 1;

    string prev = "";

    while (t--)
    {
        string s;
        cin >> s;

        if ( (prev.back() == '0' && s.front() == '0') || (prev.back() == '1' && s.front() == '1'))
        {
            ans++;
        }

        prev = s;
    }

    cout << ans;
    return 0;
}