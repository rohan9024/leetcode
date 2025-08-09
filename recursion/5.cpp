// printing all subsequences

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void func(int ind, vector<int> &a, vector<int> &temp )
    {
        if (ind >= a.size())
        {
            for (auto it : temp)
            {
                cout << it << " ";
            }
            cout << endl;
            return;
        }

        temp.push_back(a[ind]);
        func(ind+1, a,temp);
        temp.pop_back();
        func(ind+1, a, temp);

    }
};

int main()
{

    vector<int> a = {3, 1, 2};
    vector<int> temp = {};

    Solution sol;

    sol.func(0, a, temp);

    return 0;
}