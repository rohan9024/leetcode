#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int w, h;
        cin >> w >> h;

        int ans = 0;
        if (w > h)
        {
            ans = (w + h) * 2;
        }
        else
            ans = 4 * h;

        for (int i = 1; i < n; i++)
        {
            cin >> w >> h;
        }

        cout << ans << endl;
    }

    return 0;
}