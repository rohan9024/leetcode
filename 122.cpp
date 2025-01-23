// B. Index and Maximum Value

#include <bits/stdc++.h>
using namespace std;

auto speedUP = []()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         long long int n, m;
//         cin >> n >> m;
//         vector<int> v1(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> v1[i];
//         }

//         while (m--)
//         {
//             char op;
//             long long int start = 0;
//             long long int end = 0;

//             cin >> op >> start >> end;
//             int loopMax = INT_MIN;

//             for (int i = 0; i < n; i++)
//             {
//                 if (start <= v1[i] && v1[i] <= end)
//                 {
//                     if (op == '+')
//                     {
//                         v1[i]++;
//                     }
//                     else
//                     {
//                         v1[i]--;
//                     }
//                 }
//                 loopMax = max(loopMax, v1[i]);
//             }
//             cout<< loopMax << " ";

//         }

//         cout << endl;
//     }

//     return 0;
// }

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mx = max(mx, x);
        }

        while (q--)
        {
            char c;
            int x, y;
            cin >> c >> x >> y;
            if (mx >= x && mx <= y)
            {
                if (c == '+')
                    mx++;
                else
                    mx--;
            }
            cout << mx << " ";
        }
        cout << endl;
        return 0;
    }
}