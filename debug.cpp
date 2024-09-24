// Pascal Triangle

// Vectors

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
   vector<vector<int>> generate(int numRows)
   {
      vector<vector<int>> ans(numRows);

      for (int i = 0; i < numRows; i++)
      {
         ans[i].resize(i + 1, 1);
         for (int j = 0; j < i; j++)
         {
            // if (j > 0 || j >= 2)
            if (j > 0 || j >= 2)
               ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
         }
      }
      return ans;
   }
};

int main()
{
   int numRows = 5;

   Solution sol;

   vector<vector<int>> ans = sol.generate(numRows);

   for (int i = 0; i < numRows; i++)
   {
      for (int j = 0; j <= i; j++)
      {
         cout << ans[i][j] << " ";
      }
      cout << endl;
   }

   return 0;
}