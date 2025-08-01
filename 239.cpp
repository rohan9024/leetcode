// A. United We Stand

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

        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int elem = 0;
            cin >> elem;
            a.push_back(elem);
        }

        vector<int> b;

        b.push_back(a[0]);

        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] <= a[i])
            {
                b.push_back(a[i]);
            }
            else
            {
                b.push_back(a[i]);
                b.push_back(a[i]);
            }
        }

        cout << b.size() << endl;
        for (auto it : b)
        {
            cout << it << " ";
        }

        cout << endl;
    }

    int size = 0;

    return 0;
}