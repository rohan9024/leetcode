// A. Bear and Big Brother

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int ans = 0;

    while (a <= b)
    {
        ans++;
        a = a * 3;
        b = b * 2;
    }
    cout << ans << endl;


    return 0;
}
