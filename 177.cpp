// Amusing joke

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3, t1;

    cin >> s1 >> s2 >> s3;

    t1 = s1 + s2;
    sort(s3.begin(), s3.end());
    sort(t1.begin(), t1.end());

    s3 == t1 ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}