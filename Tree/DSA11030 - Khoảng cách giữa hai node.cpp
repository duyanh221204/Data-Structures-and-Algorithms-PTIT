#include<bits/stdc++.h>
using namespace std;
int d, h, v, k[1002];
vector<vector<int>> g(1002);
void tt(int x)
{
    if (h) return;
    k[x] = 1;
    if (x == v)
    {
        h = 1;
        cout << d << "\n";
        return;
    }
    for (int& i : g[x])
    {
        if (!k[i])
        {
            ++d;
            tt(i);
            --d;
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
        int n, q;
        cin >> n;
        for (int i = 1; i < n; ++i)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        cin >> q;
        while (q--)
        {
            int u;
            cin >> u >> v;
            d = h = 0;
            for (int i = 1; i <= n; ++i) k[i] = 0;
            tt(u);
        }
        for (int i = 1; i <= n; ++i)
        {
            k[i] = 0;
            g[i].clear();
        }
    }
}
