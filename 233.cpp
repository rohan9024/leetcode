// A. How Much Does Daytona Cost?

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v1(n);
        for (int i = 0; i < n; i++)
            cin >> v1[i];

        if (find(v1.begin(), v1.end(), k) != v1.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
