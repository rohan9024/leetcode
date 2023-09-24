// Stack
// 853. Car Fleet

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int carFleet(int target, vector<int> &position, vector<int> &speed)
    {
        int n = position.size();
        if (n <= 1)
            return n;

        vector<pair<int, double>> v(n);

        for (int i = 0; i < n; i++)
        {
            double time = double(target - position[i]) / double(speed[i]);
            v[i] = {target - position[i], time};
        }

        sort(v.begin(), v.end());
        int near = 0, ans = 1;

        for (int i = 0; i < n; i++)
        {
            if (v[i].second > v[near].first)
            {
                ans++;
                near = i;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> position = {10, 8, 0, 5, 3};
    vector<int> speed = {2, 4, 1, 1, 3};
    int target = 12;

    Solution sol;
    cout << sol.carFleet(target, position, speed);

    return 0;
}