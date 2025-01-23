// A. Only Pluses

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int five = 5;

        while (five > 0)
        {
            five--;

            if (a <= b && a <= c)
                a++;
            else if (b <= c && b <= a)
                b++;
            else
                c++;
        }

        cout << a * b * c << endl;
    }
    return 0;
}