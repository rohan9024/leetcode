// Rank Transform of an Array

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        vector<int> ans;
        vector<int> temp = arr;

        unordered_map<int, int> mp;

        sort(temp.begin(), temp.end());

        int rank = 1;

        for (const auto &num: temp)
        {
            if (mp.find(num) == mp.end())
            {
                mp[num] = rank;
                rank++;
            }
        }

        for (const auto &num : arr)
        {
            ans.push_back(mp[num]);
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {40, 10, 20, 30};
    vector<int> ans;

    Solution sol;
    ans = sol.arrayRankTransform(arr);

    for (auto it : ans)
    {
        cout << it << endl;
    }

    return 0;
}