// Backtracking
// Sudoku Solver

#include <bits/stdc++.h>
using namespace std;

#define N 9

class Solution
{
public:
    bool check(int grid[N][N], int row, int col, int num)
    {
        // Row
        // Col
        // 3x3 check

        for (int i = 0; i < 9; i++)
        {
            if (grid[i][col] == num)
            {
                return false;
            }
        }
        for (int i = 0; i < 9; i++)
        {
            if (grid[row][i] == num)
            {
                return false;
            }
        }

        int ini = row - row % 3;
        int inj = col - col % 3;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (grid[ini + i][inj + j] == num)
                {
                    return false;
                }
            }
        }

        return true;
    }
    bool helper(int grid[N][N], int row, int col)
    {
        if (row == 9)
            return true;
        if (col == 9)
            return helper(grid, row + 1, 0);

        if (grid[row][col] != 0)
            return helper(grid, row, col + 1);

        for (int i = 1; i <= 9; i++)
        {
            if (check(grid, row, col, i))
            {
                grid[row][col] = i;

                if (helper(grid, row, col + 1))
                {
                    return true;
                }
            }
            grid[row][col] = 0;
        }

        return false;
    }
    bool SolveSudoku(int grid[N][N])
    {
        return helper(grid, 0, 0);
    }

    void printGrid(int grid[N][N])
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << grid[i][j] << " ";
            }
        }
    };
};

int main()
{

    vector<vector<int>> grid = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                                {5, 2, 0, 0, 0, 0, 0, 0, 0},
                                {0, 8, 7, 0, 0, 0, 0, 3, 1},
                                {0, 0, 3, 0, 0, 0, 0, 6, 8},
                                {0, 0, 0, 0, 4, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 8, 6, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0}};

    Solution sol;
    if (sol.SolveSudoku(grid))
    {
        sol.printGrid(grid);
    };

    return 0;
}