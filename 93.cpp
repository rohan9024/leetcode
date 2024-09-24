// A. Helpful Maths

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str;

    vector<int> nums;

    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        if (str[i] != '+')
        {
            int num = str[i] - '0';
            nums.push_back(num);
        }
    }

    sort(begin(nums), end(nums));

    for (int i = 0; i < nums.size(); i++)
    {
        if (i != nums.size() - 1)
        {

            cout << nums[i] << "+";
        }
        else
        {
            cout << nums[i];
        }
    }

    return 0;
}