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

        string s;
        cin >> s;

        int dotCount = 0;
        int checkThree = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                dotCount++;
                checkThree++;
            }
            else
                checkThree = 0;

            if (checkThree == 3)
            {
                cout << 2 << endl;
                break;
            }
        }

        if (checkThree != 3)
            cout << dotCount << endl;
    }
    return 0;
}