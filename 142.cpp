// B. Buying Lemonade

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, subtract = 0, ans = 0;
        cin >> n >> k;
        ans = k;

        vector<long long int> v1(n);

        for (auto &it : v1)
            cin >> it;

        sort(v1.begin(), v1.end());

        for (int i = 0; i < n; i++)
        {
            v1[i] -= subtract;
            k -= min(k, (n - i) * v1[i]);

            if (k == 0)
                break;
            else
                ans++;

            subtract += v1[i];
        }

        cout << ans << endl;
    }

    return 0;
}