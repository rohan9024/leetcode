// 507. Perfect Number

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        int sum = 0;
        for (int i = 1; i <num; i++)
        {
            if (num % i == 0)
            {

                cout << i << endl;
                sum += i;
            }
        }

        return sum == num;
    }
};

int main()
{
    int x = 28;

    Solution sol;
    cout << sol.checkPerfectNumber(x);

    return 0;
}