// second Largest element

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int secondLargestElement(vector<int> &nums)
    {
        int a = INT_MIN;
        int b = INT_MIN;

        for (int num : nums)
        {

            if (a < num)
            {
                b = a;
                a = num;
            }
            else if (num > b && num != a)
                b = num;
        }

        return b;
    }
};

int main()
{

    vector<int> nums = {3, 40, 5, 6, 2, 10};

    Solution sol;
    cout << sol.secondLargestElement(nums);

    return 0;
}