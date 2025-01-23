// A. Marathon

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> v;

        for (int i = 0; i < 4; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }

        int ans = 0;

        for (int i = 1; i < 4; i++)
        {
            if (v[0] < v[i])
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}