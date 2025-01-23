// A. Hulk

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s = "";

    for (int i = 1; i <= n - 1; i++)
    {
        if (i % 2 == 0)
            s.append("I love that ");
        else
            s.append("I hate that ");
    }

    if (n % 2 == 0)
        s.append("I love it");
    else
        s.append("I hate it");

    cout << s << endl;
    return 0;
}