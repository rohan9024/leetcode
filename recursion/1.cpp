// Reverse an array

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> func(vector<int> &a, int l, int r)
    {
        if (l >= r)
            return a;

        int temp = a[l];
        a[l] = a[r];
        a[r] = temp;

        return func(a, l + 1, r - 1);
    }
};

int main()
{

    vector<int> a = {1, 2, 3, 4, 5,6};

    Solution sol;
    vector<int> b = sol.func(a, 0, 4);

    for (auto it : b)
    {
        cout << it << " ";
    }

    cout << endl;
    return 0;
}