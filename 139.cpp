// Graphs Basics

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;

    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
    }

    for (int i = 1; i <= n; i++)
    {
        for (auto j : adj[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}