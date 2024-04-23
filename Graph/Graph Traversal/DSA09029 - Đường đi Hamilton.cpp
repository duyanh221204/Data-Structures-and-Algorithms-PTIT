#include<bits/stdc++.h>
using namespace std;
int v, d, h, k[12];
vector<vector<int>> g(12);
void tt(int x)
{
    if (h) return;
    for (int& i : g[x])
    {
        if (!k[i])
        {
            k[i] = 1;
            ++d;
            if (d == v) h = 1;
            else tt(i);
            --d;
            k[i] = 0;
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
        int e;
        cin >> v >> e;
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        for (int i = 1; i <= v; ++i)
        {
            for (int j = 1; j <= v; ++j) k[j] = 0;
            k[i] = d = 1;
            tt(i);
            if (h) break;
        }
        cout << h << "\n";
        for (int i = 1; i <= v; ++i)
        {
            k[i] = 0;
            g[i].clear();
        }
        h = 0;
    }
}
