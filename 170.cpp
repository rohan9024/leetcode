// Anton and Polyhedrons

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans = 0;

    while (t--)
    {
        string s;
        cin >> s;
        if (s == "Icosahedron")
            ans += 20;
        else if (s == "Tetrahedron")
            ans += 4;
        else if (s == "Cube")
            ans += 6;
        else if (s == "Octahedron")
            ans += 8;
        else
            ans += 12;
    }

    cout << ans << endl;
    return 0;
}