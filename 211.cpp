// A. Jagged Swaps

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
        vector<int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            int elem;
            cin >> elem;

            v1.push_back(elem);
        }

        v2 = v1;

        sort(v2.begin(), v2.end());

        if (v2[0] == v1[0])
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}