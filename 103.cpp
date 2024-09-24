// A. Soldier and Bananas

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int totalAmountRequired = 0;

    for (int i = 0; i <= w; ++i)
    {
        totalAmountRequired = totalAmountRequired + (i * k);
    }

    if ((totalAmountRequired - n) > 0)
    {
        cout << totalAmountRequired - n;
    }
    else
    {
        cout << 0;
    }
}