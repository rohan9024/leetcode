// A. YES or YES?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string temp = "";

    int n;
    cin >> n;

    while (n--)
    {
        cin >> temp;

        string temp2;

        for (char it : temp)
        {
            temp2 += tolower(it);
        }

        if (temp2 == "yes")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        temp = "";
    }

    return 0;
}