// A. Line Trip

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, x;
        cin >> n >> x;

        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        int last = 0;
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, v1[i] - last);
            last = v1[i];
        }
        ans = max(ans, 2 * (x - last));
        cout << ans << endl;
    }

    return 0;
}