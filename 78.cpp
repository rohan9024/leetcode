// 167. Two Sum II - Input Array Is Sorted
// Two pointer


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
   vector<int> twoSum(vector<int> &numbers, int target)
   {
      int l = 0, r = numbers.size()-1;

      while (l < r)
      {
         int sum = numbers[l] + numbers[r];
         if (sum == target)
         {
            return {l + 1, r + 1};
         }
         else if (sum > target)
         {
            r--;
         }
         else
         {
            l++;
         }
      }

      return {-1, -1};
   }
};
int main()
{
   vector<int> nums = {2, 7, 11, 15};
   int target = 9;
   vector<int> ans;

   Solution sol;
   ans = sol.twoSum(nums, target);
   for (auto an : ans)
   {
      cout << an << endl;
   }

   return 0;
}