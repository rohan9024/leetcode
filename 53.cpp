// 1642. Furthest Building You Can Reach

// Heap / Priority Queue


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int furthestBuilding(vector<int> &h, int b, int l)
    {
        priority_queue<int> p;

        int i = 0, diff = 0;
        for (i = 0; i < h.size() - 1; i++)
        {

            diff = h[i + 1] - h[i];

            if (diff <= 0)
            {
                continue;
            }

            b -= diff;
            p.push(diff);

            if (b < 0)
            {
                b += p.top();
                p.pop();
                l--;
            }

            if (l < 0)
                break;
        }

        cout << b << endl;

        return i;
    }
};

int main()
{
    vector<int> nums = {4, 2, 7, 6, 9, 14, 12};
    int b = 5;
    int l = 1;

    Solution sol;
    cout << sol.furthestBuilding(nums, b, l);

    return 0;
}
