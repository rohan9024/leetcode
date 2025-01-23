// A. Next Round

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int ans = 0;

    vector<int> scores(n);

    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    for (int i = 0; i < scores.size(); i++)
    {
        if ((scores[i] >= scores[k - 1]) && (scores[i] > 0))
            ans++;
    }

    cout << ans << endl;

    return 0;
}