// C. Target Practice

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x = 10, y = 10;

        char arr[x][y];
        int points = 0;

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> arr[i][j];
                if ((arr[i][j]) == 'X')
                {
                    if (i == 0 || j == 0 || i == 9 || j == 9)
                        points++;
                    else if (i == 1 || j == 1 || i == 8 || j == 8)
                        points = points + 2;
                    else if (i == 2 || j == 2 || i == 7 || j == 7)
                        points = points + 3;
                    else if (i == 3 || j == 3 || i == 6 || j == 6)
                        points = points + 4;
                    else if (i == 4 || j == 4 || i == 5 || j == 5)
                        points = points + 5;
                }
            }
        }

        cout << points<< endl;
    }

    return 0;
}
