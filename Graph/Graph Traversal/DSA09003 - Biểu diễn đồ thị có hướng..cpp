#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int v, e;
        cin >> v >> e;
        vector<vector<int>> g(v + 2);
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
        }
        for (int i = 1; i <= v; ++i)
        {
            sort(g[i].begin(), g[i].end());
            cout << i << ": ";
            for (int& j : g[i]) cout << j << " ";
            cout << "\n";
        }
    }
}
