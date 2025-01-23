// Game of Mathletes

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

        vector<int> v1(n);

        for (int i = 0; i < n; i++)
            cin >> v1[i];

        map<int, int> mp;

        int ans = 0;

        for (int num : v1)
        {
            int complement = k - num;
            if (mp[complement] > 0)
            {
                ans++;
                mp[complement]--;
            }
            else
            {
                mp[num]++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
