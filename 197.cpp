// A. Lucky?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string n;
        cin >> n;

        int firstSum = 0, lastSum = 0;

        for (int i = 0; i < 3; i++)
        {
            int num = n[i] - '0';
            firstSum += num;
        }

        for (int i = n.size() - 1, count = 0; i >= 0 && count < 3; i--, count++)
        {
            int num = n[i] - '0';
            lastSum += num;
        }

        if (firstSum == lastSum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}