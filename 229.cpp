// A. Fibonacciness

#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;

    while (t--)
    {
        long long a1, a2, a4, a5;

        cin >> a1 >> a2 >> a4 >> a5;

        long long a3 = a4 - a2;

        long long ans = 0;
        if (a1 + a2 == a3)
            ans++;
        if (a2 + a3 == a4)
            ans++;
        if (a3 + a4 == a5)
            ans++;

        cout << ans << endl;
    }

    return 0;
}