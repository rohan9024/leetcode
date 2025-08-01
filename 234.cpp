// goals of victory

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

        vector<int> v1(n-1);

        for (int i = 0; i < n-1; i++)
        {
            cin >> v1[i];
        }

        int sum = accumulate(v1.begin(), v1.end(), 0);

        cout << -sum << endl;
    }

    return 0;
}
