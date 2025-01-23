// Search Insert Position
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
   int searchInsert(vector<int> &nums, int target)
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

      return left;
   }
};

int main()
{

   vector<int> nums = {1, 3, 5, 6};
   int target = 2;

   Solution sol;
   cout << sol.search(nums, target);

   return 0;
}