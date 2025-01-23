// Missing Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<int> v1(n);

    for (int i = 0; i < n-1; i++)
    {
        cin >> v1[i];
    }
    sort(v1.begin(), v1.end());

    for (int i = 1; i <= n; i++)
    {
        if (v1[i] == i)
            continue;
        else
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}