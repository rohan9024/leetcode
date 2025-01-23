// Binary Search

#include <bits/stdc++.h>
using namespace std;
auto speedUP = []()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   return 'c';
}();

class Solution
{
public:
   int search(vector<int> &nums, int target)
   {
      int left = 0;
      int right = nums.size() - 1;

      while (left <= right)
      {
         int mid = left + (right - left) / 2;
         if (nums[mid] == target)
            return mid;
         else if (nums[mid] < target)
            left = mid + 1;
         else
            right = mid - 1;
      }

      return -1;
   }
};

int main()
{

   vector<int> nums = {1, 3, 5, 6};
   int target = 5;

   Solution sol;
   cout << sol.search(nums, target);

   return 0;
}