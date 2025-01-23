// Repetitions

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int ans = 0;

    int curr = 1;

    for (int i = 1; i < str.size(); i++)
    {

        if (str[i - 1] == str[i])
        {
            curr++;
        }
        else
        {
            ans = max(ans, curr);
            curr = 1;
        }
    }

    ans = max(curr, ans);

    cout << ans;

    return 0;
}