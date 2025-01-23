// Search a 2D Matrix
// Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            int left = 0;
            int right = matrix[i].size() - 1;

            while (left <= right)
            {
                int mid = left + (right - left) / 2;

                if (matrix[i][mid] == target)
                    return 1;
                else if (matrix[i][mid] > target)
                    right = mid - 1;
                else
                    left = mid + 1;
            }
        }

        return 0;
    }
};

int main()
{

    vector<vector<int>> matrix = {{1, 2, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;

    Solution sol;
    cout << sol.searchMatrix(matrix, target);

    return 0;
}