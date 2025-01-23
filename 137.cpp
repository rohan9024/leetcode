// A. A Gift From Orangutan
// Contest

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

        int maxElement = 0;

        for (int i = 0; i < n; i++)
        {

            int elem;

            cin >> elem;
            maxElement = max(elem, maxElement);

            a.push_back(elem);
        }

        vector<int> c(n, maxElement);

        sort(a.begin(), a.end());
        vector<int> b(n - 1, a[0]);

        b.push_back(a[n - 1]);

        int ans = 0;
        for (int i = 0; i < a.size(); i++)
        {
            ans += c[i] - b[i];
        }

        cout << ans << endl;
    }

    return 0;
}