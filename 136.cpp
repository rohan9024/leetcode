// A. Calculating Function
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int ans = -1;
    long long int countEven = n / 2;
    long long int sumEven = countEven * (countEven + 1);

    long long int countOdd = (n + 1) / 2;
    long long int sumOdd = countOdd * countOdd;

    cout << sumEven - sumOdd;

    return 0;
}