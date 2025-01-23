// In Search of an Easy Problem

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v1;

    while (n--)
    {
        int elem;
        cin >> elem;
        v1.push_back(elem);
    }

    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] == 1)
        {
            cout << "HARD";
            return 0;
        }
    }

    cout << "EASY";

    return 0;
}