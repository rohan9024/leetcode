// Beautiful Matrix

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5], r, c;

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                r = abs(2-i);
                c = abs(2-j);
                cout << r + c;
            }
        }
    }
    return 0;
}