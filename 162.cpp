#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int steps = 0;
    vector<long long int> arr(n);

    cin >> arr[0];

    for (int i = 1; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] < arr[i - 1])
        {
            steps += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }

    cout << steps << endl;

    return 0;
}
