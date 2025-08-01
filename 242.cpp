//  378. Kth Smallest Element in a Sorted Matrix

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        priority_queue<int> pq;

        vector<int> ans;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                pq.push(matrix[i][j]);
                if (pq.size() > k)
                    pq.pop();
            }
        }

        return pq.top();
    }
};

int main()
{
    int k = 8;

    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}};

    Solution sol;
    cout << sol.kthSmallest(matrix, k);

    return 0;
}
