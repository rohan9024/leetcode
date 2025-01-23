// Fox and snake

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];

    int count = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 != 0 && j != m - 1 && count % 2 == 0)
                cout << '.';
            else if (i % 2 != 0 && j == 0 && count % 2 != 0)
                cout << '#';
            else if (i % 2 != 0 && j != 0 && count % 2 != 0)
                cout << '.';
            else
                cout << '#';
        }
        cout << endl;
        if ((i + 1) % 2 != 0)
            count++;
    }

    return 0;
}