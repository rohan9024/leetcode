// A. Holiday Of Equality

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    sort(v1.begin(), v1.end());

    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans += v1[n - 1] - v1[i];
    }

    cout << ans << endl;

    return 0;
}