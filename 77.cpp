// Max points to obtain from cards

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 10, 10, 10, 10};
    int k = 4;

    int lsum = 0, rsum = 0, maxSum = 0;

    for (int i = 0; i <= k - 1; i++)
    {
        lsum = lsum + nums[i];
    }

    maxSum = lsum;

    int rIndex = nums.size() - 1;

    for (int i = k - 1; i >= 0; i--)
    {
        lsum = lsum - nums[i];
        rsum = rsum + nums[rIndex];
        rIndex = rIndex - 1;

        maxSum = max(maxSum, lsum + rsum);
    }

    cout << maxSum << endl;

    return 0;
}