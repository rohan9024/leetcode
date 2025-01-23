// A. Sereja and Dima

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int num = 0;
        cin >> num;
        v.push_back(num);
    }

    int start = 0;
    int end = v.size() - 1;

    int sereja = 0;
    int dima = 0;

    for (int i = 0; i < n; i++)
    {
        // Check for leftmost and rightmost
        if (v[start] <= v[end])
        {
            if (i % 2 == 0)
                sereja = sereja + v[end];
            else
                dima = dima + v[end];

            end--;
        }
        else
        {
            if (i % 2 == 0)
                sereja = sereja + v[start];
            else
                dima = dima + v[start];

            start++;
        }
    }

    cout << sereja << " " << dima << endl;

    return 0;
}