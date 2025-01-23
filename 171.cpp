// Permutations
// cses

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    if (n <= 3 && n > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string s;

    if (n > 3)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                cout << i << " ";
            else
            {
                s += to_string(i) + " ";
            }
        }
    }
    cout << s << endl;
    return 0;
}