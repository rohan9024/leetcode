// printing all subsequences with sum k

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &a, int low, int mid, int high)
    {
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high)
        {
            if (a[left] <= a[right])
            {
                temp.push_back(a[left]);
                left++;
            }
            else
            {
                temp.push_back(a[right]);
                right++;
            }
        }
        while (left <= mid)
        {
            temp.push_back(a[left]);
            left++;
        }

        while (right <= high)
        {
            temp.push_back(a[right]);
            right++;
        }

        for (int i = low; i <= high; i++)
        {
            a[i] = temp[i - low];
        }
    }
    void mS(vector<int> &a, int low, int high)
    {
        if (low == high)
            return;

        int mid = (low + high) / 2;

        mS(a, low, mid);
        mS(a, mid + 1, high);

        merge(a, low, mid, high);
    }

    void mergeSort(vector<int> &a, int n)
    {
        mS(a, 0, n - 1);

        for (auto it : a)
        {
            cout << it << " ";
        }
    }
};

int main()
{

    vector<int> a = {7, 8, 9, 10, 1, 2, 3, 4, 5};

    Solution sol;

    sol.mergeSort(a, a.size());

    return 0;
}