
// A. Robin Helps

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v1;

        for (int i = 0; i < n; i++)
        {
            int elem;
            cin >> elem;
            v1.push_back(elem);
        }

        int ans = 0;

        int robinGold = 0;
        int pointer = 0;

        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] >= k)
            {
                robinGold += v1[i];
            }
            else if (v1[i] == 0 && robinGold > 0)
            {
                robinGold--;
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
