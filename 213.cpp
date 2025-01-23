// plus or minus

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v1;
        for (int i = 0; i < 3; i++)
        {
            int elem;
            cin >> elem;

            v1.push_back(elem);
        }

        if (v1[0] + v1[1] == v1[2])
        {
            cout << "+" << endl;
        }
        else
            cout << "-" << endl;
    }
    return 0;
}