// Find Kth Rotation
// Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKRotation(vector<int> &arr)
    {
        int ans = INT_MAX;
        int low = 0;
        int index = 0;
        int high = arr.size() - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (arr[low] <= arr[high])
            {
                if (arr[low] < ans)
                {
                    index = low;
                    ans = arr[low];
                }
                break;
            }
            if (arr[low] <= arr[mid])
            {
                if (arr[low] < ans)
                {
                    index = low;
                    ans = arr[low];
                }

                low = mid + 1;
            }
            else
            {
                if (arr[mid] < ans)
                {
                    index = mid;
                    ans = arr[mid];
                }
                high = mid - 1;
            }
        }
        return index;
    }
};

int main()
{

    vector<int> arr = {40, 50, 10, 20, 30};

    Solution sol;
    cout << sol.findKRotation(arr);

    return 0;
}