// Quintomania

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

        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        int prev = v[0];

        bool ans = true;

        for (int i = 1; i < n; i++)
        {
            if (abs(prev - v[i]) == 5 || abs(prev - v[i]) == 7)
            {
                prev = v[i];
                continue;
            }

            else
            {
                ans = false;
                break;
            }
        }

        ans ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}