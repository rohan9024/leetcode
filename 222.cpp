// A.  Jellyfish and Undertale

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;

        vector<long long> v1(n);

        for (int i = 0; i < n; i++)
            cin >> v1[i];

        long long ans = b;
        for (auto x : v1)
        {
            ans += min(1LL + x, a * 1LL) - 1;
        }

        cout << ans << endl;
    }

    return 0;
}
