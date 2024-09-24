// A. Stones on the Table
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0;

    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == s[i])
            a++;
    }

    cout << a;

    return 0;
}
