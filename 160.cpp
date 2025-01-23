// A. Insomnia cure

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int ans = 0;
    while (d > 0)
    {
        if (d % k == 0 || d % m == 0 || d % n == 0 || d % l == 0)
            ans++;

        d--;
    }
    cout << ans << endl;

    return 0;
}
