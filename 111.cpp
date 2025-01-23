// 1979. Find Greatest Common Divisor of Array

#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     int findGCD(vector<int> &nums)
//     {
//         int ans = 0;
//         int minNumber = nums[0];
//         int maxNumber = nums[0];

//         for (int i = 0; i < nums.size(); i++)
//         {
//             maxNumber = max(maxNumber, nums[i]);
//             minNumber = min(minNumber, nums[i]);
//         }

//         ans = (maxNumber * minNumber) / lcm(maxNumber, minNumber);
//         return ans;
//     }
// };


// Without using lcm inbuilt function
class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        int ans = 0;
        int minNumber = nums[0];
        int maxNumber = nums[0];

        for (int i = 0; i < nums.size(); i++)
        {
            maxNumber = max(maxNumber, nums[i]);
            minNumber = min(minNumber, nums[i]);
        }



        for (int i = minNumber; i > 0; i--)
        {
            if ((minNumber % i == 0) && (maxNumber % i == 0))
            {
                ans = i;
                break;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {40, 10, 20, 30};

    Solution sol;
    cout << sol.findGCD(arr);

    return 0;
}