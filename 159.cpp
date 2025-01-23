// Arrival of general

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mini = INT_MAX, maxi = INT_MIN;

    int minIndex = 0, maxIndex = 0;

    int ans = 0;

    vector<int> nums(n);
    for (auto &it : nums)
    {
        cin >> it;
    }

    // Finding min and max
    for (int i = 0; i < n; i++)
    {
        if (mini >= nums[i])
        {
            mini = nums[i];
            minIndex = i;
        }
    }

    if (minIndex != n - 1)
    {
        // Mini
        for (int i = minIndex; i < n - 1; i++)
        {

            int temp = nums[i];
            nums[i] = nums[i + 1];
            nums[i + 1] = temp;

            ans++;
        }
    }

    for (int i = 0; i < n; i++)
    {

        if (maxi < nums[i])
        {
            maxi = nums[i];
            maxIndex = i;
        }
    }
    // Max

    if (maxIndex != 0)
    {

        for (int i = maxIndex; i > 0; i--)
        {
            int temp = nums[i];
            nums[i] = nums[i - 1];
            nums[i - 1] = temp;

            ans++;
        }
    }

    cout << ans << endl;


    return 0;
}
