#include <bits/stdc++.h>
using namespace std;

// 2149. Rearrange Array Elements by Sign

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long largestPerimeter(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        long long res = -1;
        long long total = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (total > nums[i])
            {
                res = total + nums[i];
            }
            total += nums[i];
        }

        return res;
    }
};

int main()
{
    vector<int> nums = {1, 12, 1, 2, 5, 50, 3};

    Solution sol;
    cout << sol.largestPerimeter(nums);

    return 0;
}
