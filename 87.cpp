// A. Team

#include <bits/stdc++.h>
using namespace std;

int main()
{

   int n;
   cin >> n;

   int nums[n];

   int row = 0;

   for (int i = 0; i < n; i++)
   {
      int x, y, z;
      cin >> x >> y >> z;

      nums[i] = x + y + z;
   }

   int result = 0;

   for (int i = 0; i < n; i++)
   {
      if (nums[i] >= 2)
      {
         result++;
      }
   }

   cout << result;
}