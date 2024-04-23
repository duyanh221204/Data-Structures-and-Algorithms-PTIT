#include<bits/stdc++.h>
using namespace std;
int k[1002], p[1002];
vector<vector<int>> g(1002);
int tt(int x)
{
    k[x] = 1;
    for (int& i : g[x])
    {
        if (!k[i])
        {
            p[i] = x;
            if (tt(i)) return 1;
        }
        else if (k[i] == 1) return 1;
    }
    k[x] = -1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int v, e, d = 0;
        cin >> v >> e;
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
        }
        for (int i = 1; i <= v; ++i)
        {
            if (!k[i])
            {
                if (tt(i))
                {
                    d = 1;
                    cout << "YES\n";
                    break;
                }
            }
        }
        if (!d) cout << "NO\n";
        for (int i = 1; i <= v; ++i)
        {
            k[i] = p[i] = 0;
            g[i].clear();
        }
    }
}
