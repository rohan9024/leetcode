// 881. Boats to Save People

// Two pointer approach
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        int first = 0;
        int last = people.size() - 1;

        int boatsRequired = 0;
        for (int i = 0; i < people.size(); i++)
        {
            if (first + last < limit && last - 1 != first)
                last--;
            else if ()
            {
            }
            else {
                boatsRequired++;
            }
        }

        return boatsRequired;
    }
};

int main()
{
    vector<int> people = {1, 2};
    int limit = 3;

    Solution s;
    cout << s.numRescueBoats(people, limit);

    return 0;
}
