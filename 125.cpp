// Meaning Mean

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

        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        sort(v1.begin(), v1.end());

        int result = v1[0];

        for (int i = 1; i < v1.size(); i++)
        {
            result = (result + v1[i]) / 2;

            cout << result << " ";
        }

        cout << endl;

        cout << result << endl;
    }

    return 0;
}
