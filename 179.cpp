// A. Buy a Shovel

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 100; i++)
    {
        int ans = (k * i) % 10;
        if (ans == 0)
        {
            cout << i << endl;
            return 0;
        }
        else if (ans == r)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}