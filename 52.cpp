// 1481. Least Number of Unique Integers after K Removals

#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int findLeastNumOfUniqueInts(vector<int> &arr, int k)
    {

        unordered_map<int, int> um1;

        for (auto n : arr)
        {
            um1[n]++;
        }

        vector<int> v1;

        for (auto a : um1)
        {
            v1.push_back(a.second);
        }

        sort(v1.begin(), v1.end());
        int count = 0;

        for (int i = 0; i < v1.size(); i++)
        {
            if (k >= v1[i])
            {
                k -= v1[i];
                count++;
            }
            else
            {
                break;
            }
        }

        return v1.size() - count;
    }
};

int main()
{
    vector<int> nums = {4,3,1,1,3,3,2};
    int k = 3;

    Solution sol;
    cout << sol.findLeastNumOfUniqueInts(nums, k);

     return 0;
}
