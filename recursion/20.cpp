
// sudoku solver LC

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool graphColoring(int v, vector<vector<int>> &edges, int m)
    {
    }
};
int main()
{

    int v = 4;
    vector<vector<int>> edges = {
        {0, 1},
        {1, 3},
        {2, 3},
        {3, 0},
        {0, 2}};
    int m = 2;

    Solution sol;

    sol.solveSudoku(board);

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
