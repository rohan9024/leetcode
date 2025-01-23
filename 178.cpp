// A. Soft Drinking

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ans = k * l;
    int toasts = ans / nl;
    int ltoasts = c * d;
    int finalSalt = p / np;

    int finalAns = min(min((k * l) / nl, c * d), p / np) / n;

    cout << finalAns << endl;
    return 0;
}