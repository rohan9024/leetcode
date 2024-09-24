// Single Number

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
   int singleNumber(vector<int> &nums)
   {
      unordered_map<int, int> um;

      for (auto it : nums)
      {
         um[it]++;
      }

      int result;

      for (const auto &pair : um)
      {
         if (pair.second == 1)
         {
            result = pair.first;
         }
      }

      return result;
   }
};

int main()
{

   vector<int> nums = {2, 2, 3, 4, 4};

   Solution sol;
   cout << sol.singleNumber(nums);
}