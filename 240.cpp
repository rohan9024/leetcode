// remove duplicates from sorted list

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> removeDuplicates(vector<int> &arr)
    {
        vector<int> ans;

        ans.push_back(arr[0]);
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] != arr[i - 1])
                ans.push_back(arr[i]);
        }

        return ans;
    }
};

int main()
{

    vector<int> arr = {1, 1, 2, 3, 3};
    vector<int> ans;
    Solution sol;
    ans = sol.removeDuplicates(arr);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}
