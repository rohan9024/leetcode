// A. Legs

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
        int ans = 0;
        while (n > 0)
        {
            if (n >= 4)
            {
                n = n - 4;
                ans++;
            }
            else
            {
                n = n - 2;
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
