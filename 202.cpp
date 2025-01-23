// A. Cover in Water

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

        if (n % 3 == 0)
            cout << "Second" << endl;
        else if (n % 3 != 0)
        {
            cout << "First" << endl;
        }
    }
    return 0;
}

// 12
// 3
// 6
// 9
// 12
// 15
// 18
// 21
// 24
// 27
// 30
// 32
// 34