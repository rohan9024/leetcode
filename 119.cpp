
// A. Translation

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st1, st2;
    cin >> st1 >> st2;

    string temp = st1;
    reverse(temp.begin(), temp.end());

    if (st2 == temp)
        cout << "YES";
    else
        cout << "NO";
}