// quick sort

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int func(vector<int> &a, int low, int high)
    {
        int pivot = a[low];
        int i = low;
        int j = high;

        while (i < j)
        {
            while (a[i] <= pivot && i <= high)
            {
                i++;
            }
            while (a[j] > pivot && j >= low)
            {
                j--;
            }
            if (i < j)
                swap(a[i], a[j]);
        }

        swap(a[low], a[j]);
        return j;
    }
    void qs(vector<int> &a, int low, int high)
    {
        if (low < high)
        {
            int pIndex = func(a, low, high);
            qs(a, low, pIndex - 1);
            qs(a, pIndex + 1, high);
        }

        for (auto it : a)
        {
            cout << it << " ";
        }
        cout << endl;
    }
};
int main()
{
    vector<int> a = {4, 6, 2, 5, 7, 9, 1, 3};

    Solution sol;
    sol.qs(a, 0, a.size() - 1);

    return 0;
}