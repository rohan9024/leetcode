#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> left_Product(n);
        vector<int> right_Product(n);
        left_Product[0] = 1;
        for (int i = 1; i < n; i++)
        {
            // cout << "Left Product: " << nums[i - 1] << endl;
            left_Product[i] = left_Product[i - 1] * nums[i - 1];

            // cout << "Left Product ka element: " << left_Product[i] << endl;
        }
        right_Product[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            // cout << "Right Product: " << nums[i + 1] << endl;
            right_Product[i] = right_Product[i + 1] * nums[i + 1];
            // cout << "Right Product ka element: " << right_Product[i] << endl;
        }
        for (int i = 0; i < n; i++)
        {
            cout << "Left Product: " << left_Product[i] << " "<< "Right Product: " << right_Product[i]  << endl;
            ans[i] = left_Product[i] * right_Product[i];

        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    Solution s;
    vector<int> ans = s.productExceptSelf(nums);

    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}