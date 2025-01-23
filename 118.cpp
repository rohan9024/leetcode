
// A. Anton and Danik

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string games;
    cin >> games;

    int danik = 0, anton = 0;

    for (auto ch : games)
    {
        if (ch == 'A')
            anton++;
        else
            danik++;
    }

    if (danik > anton)
        cout << "Danik";

    else if (danik < anton)
        cout << "Anton";
    else
        cout << "Friendship";
}