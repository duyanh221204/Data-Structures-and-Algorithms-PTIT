#include<bits/stdc++.h>
using namespace std;
int k[1002];
vector<vector<int>> g(1002);
void tt(int x)
{
    k[x] = 1;
    for (int& i : g[x])
    {
        if (!k[i]) tt(i);
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
        int v, e, d = 0;
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
            if (!k[i])
            {
                ++d;
                tt(i);
            }
        }
        for (int i = 1; i <= v; ++i)
        {
            for (int j = 1; j <= v; ++j) k[j] = 0;
            int d1 = 0;
            k[i] = 1;
            for (int j = 1; j <= v; ++j)
            {
                if (!k[j])
                {
                    ++d1;
                    tt(j);
                }
            }
            if (d1 > d) cout << i << " ";
        }
        for (int i = 1; i <= v; ++i)
        {
            k[i] = 0;
            g[i].clear();
        }
        cout << "\n";
    }
}
