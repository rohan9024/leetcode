// Two pointer approach

// 832. Flipping an Image

#include <bits/stdc++.h>
using namespace std;

class Solution
{

private:
    void reverse(vector<int> &arr)
    {
        int mid = arr.size() / 2;

        for (int i = 0; i < mid; i++)
        {
            swap(arr[i], arr[arr.size() - 1 - i]);
        }
    }

public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {

        for (auto &row : image)
        {
            // Flip
            reverse(row);

            // Invert
            for (auto &val : row)
            {
                val = val == 1 ? 0 : 1;
            }
        }

        return image;
    }
};
int main()
{

    vector<vector<int>> image = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    Solution sol;
    vector<vector<int>> ans = sol.flipAndInvertImage(image);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }

        cout << "           ";
    }

    return 0;
}