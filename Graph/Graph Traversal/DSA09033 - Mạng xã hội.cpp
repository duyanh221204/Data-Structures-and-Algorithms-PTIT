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
        int n, m, d = 0;
        cin >> n >> m;
        vector<vector<int>> g(n + 2);
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        for (int i = 1; i <= n; ++i)
        {
            for (int& j : g[i])
            {
                if (g[i].size() != g[j].size())
                {
                    d = 1;
                    cout << "NO\n";
                    break;
                }
            }
            if (d) break;
        }
        if (!d) cout << "YES\n";
    }
}
