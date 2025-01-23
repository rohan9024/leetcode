// A. George and Accommodation

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans = 0;

    while (t--)
    {
        int p, q;
        cin >> p >> q;

        if (q-p >= 2)
        {
            cout << p - q << " ";
            ans++;
        }
    }

    cout << ans;

    return 0;
}