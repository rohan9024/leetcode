// Kth Missing Positive Number
// Binary Search

#include <bits/stdc++.h>
using namespace std;

// Brute Force
// class Solution
// {
// public:
//     int findKthPositive(vector<int> &arr, int k)
//     {
//         vector<int> arr2;

//         int i = 0, j = 1;
//         while (i < arr.size())
//         {
//             if (arr[i] == j)
//             {
//                 i++;
//             }
//             else
//             {
//                 arr2.push_back(j);
//             }
//             j++;
//         }

//         return arr2[k - 1];
//     }
// };

// Better Brute Force with less memory

// class Solution
// {
// public:
//     int findKthPositive(vector<int> &arr, int k)
//     {
//         for (int i = 0; i < arr.size(); i++)
//         {
//             if (arr[i] <= k)
//                 k++;
//             else
//                 break;
//         }

//         return k;
//     }
// };

class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int l = 0;
        int h = arr.size() - 1;

        while (l <= h)
        {
            int m = l + (h - l) / 2;

            int missing = arr[m] - (m + 1);

            if (missing < k)
                l = m + 1;
            else
                h = m - 1;
        }
        return l + k;
    }
};

int main()
{

    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;

    Solution sol;
    cout << sol.findKthPositive(arr, k);

    return 0;
}
