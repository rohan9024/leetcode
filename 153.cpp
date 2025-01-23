#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        int l = 0;
        int r = citations.size() - 1;
        int mid = (l + r) / 2;

        if (citations.size() % 2 != 0)
            mid += 1;

        return citations[mid];
    }
};
int main()
{
    vector<int> citations = {0, 1, 3, 5, 6};

    Solution sol;
    cout << sol.hIndex(citations);
    return 0;
}