// Two pointers
// 1423. Maximum Points You Can Obtain from Cards

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {

        int n = cardPoints.size();

        int lsum = 0, rsum = 0, maxSum = 0;

        for (int i = 0; i < k; i++)
        {
            lsum = lsum + cardPoints[i];

            maxSum = lsum;
        }

        int rindex = n - 1;

        for (int i = k - 1; i >= 0; i--)
        {
            lsum = lsum - cardPoints[i];
            rsum = rsum + cardPoints[rindex];
            rindex = rindex - 1;
            maxSum = max(maxSum, lsum + rsum);
        }

        return maxSum;
    }
};

int main()
{
    vector<int> cardPoints = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;

    Solution sol;
    cout << sol.maxScore(cardPoints, k);

    return 0;
}