// Ceil The Floor
// Binary search
// GFG

#include <bits/stdc++.h>
using namespace std;


// My approach 

class Solution
{
public:
    pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x)
    {
        pair<int, int> pm;

        int low = 0;
        int high = n-1;

        int first = -1, second = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (a[mid] <= x)
            {
                low = mid + 1;
                first = a[low - 1];
            }
            else
                high = mid - 1;
        }

        low = 0, high = n-1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (a[mid] < x)
            {
                low = mid + 1;
            }
            else if (a[mid] >= x)
            {
                high = mid - 1;
                second = a[high + 1];
            }
        }

        return {first, second};
    }
};



// class Solution
// {

// public:
//     vector<int> getFloorAndCeil(int x, vector<int> &arr)
//     {
//         sort(arr.begin(), arr.end());
//         int left = 0;

//         int right = arr.size() - 1;

//         vector<int> ans(2, -1);
//         while (left <= right)
//         {
//             int mid = left + (right - left) / 2;
//             if (arr[mid] <= x)
//             {
//                 ans[0] = arr[mid];
//                 left = mid + 1;
//             }
//             else if (arr[mid] > x)
//             {
//                 right = mid - 1;
//             }
//             else
//             {
//                 left = mid + 1;
//             }
//         }

//         left = 0;
//         right = arr.size() - 1;

//         while (left <= right)
//         {
//             int mid = left + (right - left) / 2;
//             if (arr[mid] >= x)
//             {
//                 ans[1] = arr[mid];
//                 right = mid - 1;
//             }
//             else if (arr[mid] > x)
//             {
//                 right = mid - 1;
//             }
//             else
//             {
//                 left = mid + 1;
//             }
//         }

//         return ans;
//     }
// };
int main()
{
    vector<int> nums = {5, 6, 8, 9, 6, 5, 5, 6};

    int x = 7;

    vector<int> ans(2, -1);

    Solution sol;
    ans = sol.getFloorAndCeil(x, nums);

    for (auto it : ans)
    {
        cout << it << endl;
    }

    return 0;
}