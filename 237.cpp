
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int num = 0;
        cin >> num;
        nums.push_back(num);
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            ans = min(nums[i], ans);
        }
        else if (nums[i] == 0)
        {
            ans = 0;
            break;
        }
        else
        {
            int num = nums[i] * (-1);
            ans = min(num, ans);
        }
    }

    cout << ans << endl;
    return 0;
}