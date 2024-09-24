// 1701. Average Waiting Time

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double averageWaitingTime(vector<vector<int>> &customers)
    {
        int n = customers.size();
        double serviceTime = customers[0][0] + customers[0][1];
        double totalWait = serviceTime - customers[0][0];

        for (int i = 1; i < n; i++)
        {
            if (serviceTime < customers[i][0])
                serviceTime = customers[i][0];
            serviceTime += customers[i][1];
            totalWait += (serviceTime - customers[i][0]);
        }
        return totalWait / n;
    }
};

int main()
{
    vector<vector<int>> customers = {{1, 2}, {2, 5}, {4, 3}};

    Solution sol;
    cout << sol.averageWaitingTime(customers);

    return 0;
}