#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
   vector<int> twoSum(vector<int> &numbers, int target)
   {

      int i = 0;
      int j = numbers.size() - 1;
      while (i <= j)
      {
         if (numbers[i] + numbers[j] == target)
            return {i + 1, j + 1};
         else if (numbers[i] + numbers[j]< target)
            i++;
         else
            j--;
      }

      return {i + 1, j + 1};
   }
};

int main()
{
   vector<int> numbers = {11, 71, 11, 12};
   vector<int> result;
   int target = 9;

   Solution s;
   result = s.twoSum(numbers, target);

   for (auto i : result)
   {
      cout << i << " ";
   }

   return 0;
}