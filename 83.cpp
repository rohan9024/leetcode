// 2947. Count Beautiful Substrings I
// Naive approach
// Prefix sum


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
   int beautifulSubstrings(string s, int k)
   {
      int result = 0;

      for (int i = 0; i < s.size(); i++)
      {
         int vowel = 0;
         int consonant = 0;
         for (int j = i; j < s.size(); j++)
         {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
               vowel++;
            else
               consonant++;
            if (vowel == consonant && ((vowel * consonant) % k == 0))
               result++;
         }
      }

      return result;
   }
};

int main()
{

   int k = 2;

   string s = "baeyh";

   Solution sol;
   cout << sol.beautifulSubstrings(s, k);

   return 0;
}