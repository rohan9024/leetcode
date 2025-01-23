// B. Drinks

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float ans = 0.0;

    for (int i = 0; i < n; i++)
    {
        float elem;
        cin >> elem;
        ans += elem/ 100;
    }


    ans = ans / n;
    cout << ans*100 << endl;
    return 0;
}