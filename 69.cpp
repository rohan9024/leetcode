#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPoints(string rings)
    {
        unordered_map<string, int> um;

        for (int i = 0; i < rings.length(); i++)
        {
            um[rings[i]] = rings[i + 1];
        }

        for (const auto &pair : um)
        {
            cout << pair.first << " " << pair.second << endl;
        }
        return 0;
    }
};

int main()
{
    string rings = "B0B6G0R6R0R6G9";

    Solution sol;
    cout << sol.countPoints(rings);

    return 0;
}
