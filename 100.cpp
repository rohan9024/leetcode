
// 884. Uncommon Words from Two Sentences
// Hashmap

#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:

    int calculate(int i, int j, vector<int> &nums, int k){
        
    }
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {

        int n = nums.size();

        int first = 0;

        int last = n - 1;

        for (int i = 0; i < n; i++)
        {
            if ((nums[first] == nums[last]) && (abs(first - last) <= k))
            {
                return true;
                break;
            }
            first++;
            last--;
        }
        return false;
    }
};

int main()
{

    vector<int> nums = {1,0,1,1};
    int k = 1;

    Solution sol;

    cout << sol.containsNearbyDuplicate(nums, k);

    return 0;
}
