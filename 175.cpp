// A. Games

#include <bits/stdc++.h>
using namespace std;

int main()
{


    vector<int> v1;
    vector<int> v2;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        int h, a;
        cin >> h >> a;
        v1.push_back(h);
        v2.push_back(a);
    }
    int ans = 0;
    for (auto it : v1)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            if (it == v2[j])
                ans++;
        }
    }

    cout << ans << endl;

    return 0;
}