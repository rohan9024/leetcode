#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int zero = 0;
    int one = 0;

    if (s[0] == '0')
        zero++;
    else
        one++;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            zero++;
            one = 0;
        }
        else
        {
            one++;
            zero = 0;
        }

        if (one == 7 || zero == 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
