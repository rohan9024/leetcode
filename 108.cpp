// A. Nearly Lucky Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int count = 0;

    for (auto s : n)
    {
        if (s == '4' || s == '7')
            count++;
    }

    if (count == 4 || count == 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}