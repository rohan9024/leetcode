// A. Divisibility Problem

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if (a % b == 0)
            cout << 0 << endl;
        else
        {
            int temp = a % b;
            cout << b - temp << endl;
        }
    }

    return 0;
}

// 10 4
// 10 % 4 == 2
// 4 - 2 == 2

// 13 9
// 13 % 9 == 4
// 9 - 4 == 5
