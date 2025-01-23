// D. Right Left Wrong

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n = 5;

    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> ps(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        ps[i] = ps[i - 1] + vec[i - 1];
    }

    for (auto it : ps)
    {
        cout << it << " ";
    }
 
    return 0;
}