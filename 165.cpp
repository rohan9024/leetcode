// Circuit


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(2 * n);

        int zero = 0, one = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
                zero++;
            else
                one++;
        }

        cout << one % 2 << " ";

        int ans = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            if (zero > 0 && one > 0)
            {
                if (v[i] == 0)
                {
                    zero--;
                    one--;
                    ans++;
                }
                else
                {
                    zero--;
                    one--;
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
