// 9. Palindrome Number

#include <bits/stdc++.h>
using namespace std;

// With Shortcut
class Solution
{
public:
   bool isPalindrome(int x)
   {
      string temp = to_string(x);
      string temp2 = temp;
      reverse(temp2.begin(), temp2.end());
      return temp2 == temp;
   }
};

// Without Shortcut
// class Solution
// {
// public:
//    bool isPalindrome(int x)
//    {

//       string temp = to_string(x);
//       bool ans = true;

//       int left = 0;
//       int right = temp.size() - 1;

//       while (left < right)
//       {
//          if (temp[left] == temp[right])
//          {
//             left++;
//             right--;
//             continue;
//          }
//          else
//          {
//             ans = false;
//             break;
//          }
//       }

//       return ans;
//    }
// };

int main()
{
   int x = 101;

   Solution sol;
   cout << sol.isPalindrome(x);

   return 0;
}