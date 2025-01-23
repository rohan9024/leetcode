// A. Primary Task

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;

        cin >> s;

        if (s.size() == 3 && s[0] == '1' && s[1] == '0' && s[2] != '0')
        {

            double temp = s[2] - '0';

            if (pow(10, temp) > 10)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (s.size() > 3 && s[0] == '1' && s[1] == '0' && s[2] != '0')
        {
            string second = s.substr(2);
            double temp = stod(second);

            if (pow(10, temp) > 10)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

