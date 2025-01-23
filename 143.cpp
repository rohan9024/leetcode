// A. Is your horseshoe on the other hoof?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4, k;
    set<int> s;

    while (n--)
    {
        cin >> k;
        s.insert(k);
    }
    cout << 4 - s.size();
    return 0;
}