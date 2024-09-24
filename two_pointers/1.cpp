// Generate all subarrays

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {2, 5, 7, 1, 10};

    int maxlen = 0;

    int k = 14;

    for (int i = 0; i < arr.size(); i++)
    {

        int sum = 0;

        for (int j = i; j < arr.size(); j++)
        {
            sum = sum + arr[j];

            if (sum <= k)
                maxlen = max(sum, arr[j - 1 + 1]);
            else if (sum > k)
                break;
        }
    }

    cout << maxlen;

    return 0;
}