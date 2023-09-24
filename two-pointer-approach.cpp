#include <bits/stdc++.h>
using namespace std;

// basic implementation of two pointer approach
// Check whether the sum is 7 of a pair

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int first = 0;
    int last = 4;
    int target = 7;

    for (int i = 0; i < 5; i++)
    {
        if (arr[first] + arr[last] < target)
        {
            first++;
        }
        else if (arr[first] + arr[last] > target)
        {
            last--;
        }
        else
        {
            cout << first << " " << last;
            break;
        }
    }

    return 0;
}