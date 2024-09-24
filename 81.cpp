#include <bits/stdc++.h>
using namespace std;

void markRow(int m, vector<vector<int>> &arr)
{

    for (int i = 0; i < 4; i++)
    {
        if (arr[m][i] != 0)
        {
            arr[m][i] = -1;
        }
    }
}
void markCol(int j, vector<vector<int>> &arr)
{
    for (int i = 0; i < 4; i++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {

        int m = matrix.size();
        int n = matrix[0].size();
        int row[m] = {0};
        int col[n] = {0};
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (row[i] || col[j])
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main()
{

    vector<vector<int>> arr = {
        {1, 1, 1, 1},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {1, 1, 1, 1},
        };

    Solution sol;
    sol.setZeroes(arr);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}