// A. Vanya and Fence

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    vector<int> v1(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    int ans = 0;

    for (auto it : v1)
    {
        if (it <= h)
            ans++;
        else
            ans = ans + 2;
    }

    cout << ans;

    return 0;
}
