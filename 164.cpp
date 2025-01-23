// A. Anton and Letters

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s2;
    getline(cin, s);

    set<char> myset;

    for (char c: s)
    {
        if (c >= 'a' && c <= 'z')
        {
            myset.insert(c);
        }
    }

    cout << myset.size() << endl;


    return 0;
}
