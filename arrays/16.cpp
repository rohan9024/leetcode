// Longest subarray with sum K TUF 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        long long sum = 0;
        int maxlen = 0;
        int first = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            while (sum > k && first <= i) {
                sum -= nums[first];
                first++;
            }

            if (sum == k) {
                maxlen = max(maxlen, i - first + 1);
            }

            // Debug
            // cout << maxlen << "  " << i << "  " << sum << " " << first << endl;
        }

        return maxlen;
    }
};

int main() {
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;

    Solution sol;
    cout << sol.longestSubarray(nums, k);

    return 0;
}
