#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> um;
    string s = "hello";

    for (auto c : s)
    // here c is the each character in s
    {
        um[c]++;
    }

    for (const auto &pair : um)
    {
        cout << pair.first << " " << pair.second
             << endl;
    }

    return 0;
}