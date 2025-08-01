#include <bits/stdc++.h>
using namespace std;



class Solution
{
public:

vector<int> sol(vector<int> &arr, int l, int r)
{
    vector<int> ans;

    return ans;
}
};


int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    int n = arr.size();
    int l = 0, r = n - 1;

    while (l <= r)
    {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}