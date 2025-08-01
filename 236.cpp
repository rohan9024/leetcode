// A. Ambitious Kid

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];

    auto it = min_element(v1.begin(), v1.end());
    if (*it < 0)
        cout << -*it << endl;
    else
        cout << *it << endl;

    return 0;
}