#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x)
{
    string s1 = to_string(x);
    string s2 = to_string(x);

    reverse(s2.begin(), s2.end());

    if (s1.compare(s2) == 0)
    {
        return true;
    }

    return false;
}
int main()
{
    int x = 1111;
    cout << isPalindrome(x);
    return 0;
}