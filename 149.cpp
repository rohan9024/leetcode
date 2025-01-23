#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int count(vector<int> &arr, int target)
    {

        sort(arr.begin(), arr.end());
        int left = 0;
        int right = arr.size() - 1;

        int start = 0;
        int end = 0;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target)
            {
                start = mid + 1;
                right = mid - 1;
            }
            else if (arr[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = left + 1;
            }
        }
        left = 0;
        right = arr.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target)
            {
                end = mid + 1;
                left = left + 1;
            }
            else if (arr[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = left + 1;
            }
        }
        if (end == 0 && start == 0)
        {
            return 0;
        }
        if (start == end)
        {
            return start;
        }

        cout << end << "  " << start << endl;

        return (end - start);
    }
};
int main()
{

    vector<int> nums = {1, 1, 2, 2, 2, 2, 3, 3};
    int target = 2;

    Solution sol;
    cout << sol.count(nums, target);

    return 0;
}
