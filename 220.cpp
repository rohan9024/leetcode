// A. Medium Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        vector<int> v1;
        for (int i = 0; i < 3; i++)
        {
            int temp;
            cin >> temp;
            v1.push_back(temp);
        }

        sort(v1.begin(), v1.end());
        cout << v1[1] << endl;
    }
    return 0;
}