// Subset Sum problem using recursion

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int totalSum = 0;
    bool helper(vector<int> arr, int targetSum, int tempSum, int i)
    {

        if (targetSum == totalSum)
        {
            return true;
        }
        if (i >= arr.size())
        {
            return false;
        }

        int recCall1 = helper(arr, targetSum, tempSum + arr[i + 1], i + 1);
        int recCall2 = helper(arr, targetSum, tempSum, i + 1);

        return recCall1 || recCall2;
    }

    bool isSubsetSum(vector<int> arr, int sum)
    {
        vector<int> temp;
        int n = arr.size() - 1;
        return helper(arr, sum, 0, 0);
    }
};

int main()
{

    vector<int> nums = {3, 34, 4, 12, 5, 2};
    int sum = 9;

    Solution sol;
    cout << sol.isSubsetSum(nums, sum);

    return 0;
}
