// A. Remove Smallest

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int num = 0;
            cin >> num;
            v.push_back(num);
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            if (i + 1 < n)
            {
                if (abs(v[i] - v[i + 1]) <= 1)
                {
                    if (v[i] >= v[i + 1])
                    {
                        v.erase(v.begin() + (i + 1));
                        n--;
                        i--;
                    }
                    else
                    {
                        v.erase(v.begin() + i);
                        n--;
                        i--;
                    }
                }
                else
                    break;
            }
        }

        if (v.size() == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}