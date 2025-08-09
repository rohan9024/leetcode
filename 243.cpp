// A. Desorting

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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (is_sorted(a.begin(), a.end()))
        {
            int mini = INT_MAX;
            for (int i = 1; i < a.size(); i++)
            {
                mini = min(a[i] - a[i - 1], mini);
            }

            cout << (mini/2)+1 << endl;
        }

        if (!is_sorted(a.begin(), a.end()))
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
