// printing all subsequences with sum k

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int func(int sum, int ind, int currSum, vector<int> &a)
    {
        if (ind == a.size())
        {
            if (sum == currSum)
            {
                return 1;
            }
            else
                return 0;
        }

        currSum += a[ind];
        int l = func(sum, ind + 1, currSum, a);
        currSum -= a[ind];

        int r = func(sum, ind + 1, currSum, a);

        return l + r;
    }
};

int main()
{

    vector<int> a = {1, 2, 3, 4, 5};

    Solution sol;

    cout << sol.func(3, 0, 0, a);

    return 0;
}