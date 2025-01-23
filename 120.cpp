
// A. Tram

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int exit, enter;
    cin >> exit >> enter;

    int ans = 0;
    int curr = enter;

    for (int i = 1; i < n; i++)
    {
        cin >> exit >> enter;
        curr += enter - exit;
        ans = max(curr, ans);
    }

    cout << ans;
}