#include<bits/stdc++.h>
using namespace std;
int k[1002];
vector<vector<int>> g(1002);
vector<pair<int, int>> vp;
void tt(int x)
{
    k[x] = 1;
    for (int& i : g[x])
    {
        if (!k[i])
        {
            vp.push_back({x, i});
            tt(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int v, e, u;
        cin >> v >> e >> u;
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        tt(u);
        if (vp.size() != v - 1) cout << "-1\n";
        else
        {
            for (auto& i : vp) cout << i.first << " " << i.second << "\n";
        }
        for (int i = 1; i <= v; ++i)
        {
            k[i] = 0;
            g[i].clear();
        }
        vp.clear();
    }
}
