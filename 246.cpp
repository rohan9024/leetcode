// A. Unit Array

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
        int sum = 0;
        int neg = 0;
        int moves = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] < 0)
                neg++;
        }

        if (sum < 0)
        {
            int needed = (-sum + 1) / 2;
            moves += needed;
            neg -= moves;
        }

        if (neg % 2 == 1)
        {
            moves++;
        }
        cout << moves << endl;
    }

    return 0;
}