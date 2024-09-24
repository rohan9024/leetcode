#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result;
        int n = nums.size() - 1;
        int i = 0;
        int j = n / 2;
        int k = n;

        sort(nums.begin(), nums.end());

        while (i < k)
        {
            vector<int> row;

            if ((i != j && i != k && j != k) && (nums[i] + nums[j] + nums[k] == 0))
            {
                row.push_back(nums[i]);
                row.push_back(nums[j]);
                row.push_back(nums[k]);
                result.push_back(row);
                i++;
            }

            else if ((nums[i] + nums[j] + nums[k] < 0) && (i + 1 != j))
                i++;

            else if (k - 1 != j)
                k--;

            else
                break;
            // if (i + 1 == j && k - 1 == j)
            //     break;
        }

        return result;
    }
};

int main()
{
    // vector<int> numbers = {-1, 0, 1, 2, -1, -4};
    vector<int> numbers = {0, 1, 1};
    vector<vector<int>> result;

    Solution s;
    result = s.threeSum(numbers);

    for (const auto &row : result)
    {
        for (int element : row)
        {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}