// Min Time Difference

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMinDifference(vector<string> &timePoints)
    {
        int n = timePoints.size();

        vector<int> minutes(n);

        for (int i = 0; i < n; i++)
        {
            string time = timePoints[i];

            string hrs = time.substr(0, 2);
            string mins = time.substr(3);

            int hrInt = stoi(hrs);
            int minInt = stoi(mins);

            minutes[i] = 60 * hrInt + minInt;
        }
        sort(begin(minutes), end(minutes));

        int result = 1440;
        for (int i = 1; i < n; i++)
        {
            result = min(result, minutes[i] - minutes[i - 1]);
        }

        return min(result, 1440 - minutes[n - 1] + minutes[0]);
    }
};

int main()
{
    vector<string> timePoints = {"01:00","00:00", "19:00", "00:20"};

    Solution sol;

    cout << sol.findMinDifference(timePoints);

    return 0;
}
