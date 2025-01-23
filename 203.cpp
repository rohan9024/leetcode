

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countFreq(vector<int> &arr, int target)
    {
        int low = 0;
        int high = arr.size() - 1;

        // Left Index
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (arr[mid] >= target)
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }

        int left = high;

        low = 0, high = arr.size() - 1;

        // Right Index

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (arr[mid] <= target)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        int right = high;

        return right - left;
    }
};

int main()
{

    // vector<int> arr = {10, 20, 20, 20, 20, 30};
    vector<int> arr = {3, 4, 4, 4, 4, 4, 7, 8, 10};

    // int target = 20;
    int target = 4;

    Solution sol;
    cout << sol.countFreq(arr, target);

    return 0;
}