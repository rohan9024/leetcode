// A. I Wanna Be the Guy

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q;
    cin >> n >> p;
    vector<int> a(p);
    set<int> s;

    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    cin >> q;
    vector<int> b(q);

    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
        s.insert(b[i]);
    }
    if (n == s.size())
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}