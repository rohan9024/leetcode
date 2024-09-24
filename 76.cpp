
// Longest subarray where sum <= k
#include <bits/stdc++.h>
using namespace std;

int speedup = []
{std::ios::sync_with_stdio(0);std::cin.tie(0);return 0; }();

int main()
{

    vector<int> arr = {2, 5, 1, 7, 10};
    int n = arr.size();

    int l = 0;
    int r = n - 1;
    int sum = 0;
    int maxlen = 0;

    int k = 14;

    while (r < n)
    {
        sum = sum + arr[r];
        while (sum > k)
        {
            sum = sum - arr[l];
            l = l + 1;
        }
        if (sum <= k)
        {
            maxlen = max(maxlen, r - l + 1);
        }
        r = r - 1;
    }

    return 0;
}

// Printing the hashtable for better understanding
// for (auto it = mp.begin(); it != mp.end(); ++it)
// {
//     cout << "Key: " << it->first << " Value: " << it->second << " ";

//     cout << endl;
// }
