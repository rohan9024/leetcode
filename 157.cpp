// Pangram

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;

    if (s.size() < 26)
        cout << "NO";
    else
    {

        set<char> st;

        // Removing spaces
        s.erase(remove(s.begin(), s.end(), ' '), s.end());

        for (int i = 0; i < s.size(); i++)
        {
            st.insert(tolower(s[i]));
        }

        st.size() == 26 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}