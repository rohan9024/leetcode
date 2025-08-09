// Reverse an array

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    void func(vector<int> &a, int i)
    {

        int n = a.size();

        if (i >= n / 2)
            return;

        swap(a[i], a[n - i - 1]);

        func(a, i + 1);
    }
};

int main()
{

    vector<int> a = {1, 2, 3, 4, 5, 6};

    Solution sol;
    sol.func(a, 0);

    for (auto it : a)
    {
        cout << it << " ";
    }

    cout << endl;
    return 0;
}