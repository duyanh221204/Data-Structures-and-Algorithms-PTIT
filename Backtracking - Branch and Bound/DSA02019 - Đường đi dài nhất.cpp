#include<bits/stdc++.h>
using namespace std;
int d, ma = -2e9, k[22][22];
vector<vector<int>> g(22);
void tt(int x)
{
    for (int& i : g[x])
    {
        if (!k[x][i])
        {
            ++d;
            k[x][i] = k[i][x] = 1;
            ma = max(d, ma);
            tt(i);
            k[x][i] = k[i][x] = 0;
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
        int n, m;
        cin >> n >> m;
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        for (int i = 0; i <= n; ++i)
        {
            d = 0;
            tt(i);
        }
        cout << ma << "\n";
        for (int i = 0; i <= n; ++i)
        {
            g[i].clear();
            for (int j = 0; j <= n; ++j) k[i][j] = 0;
        }
        ma = -2e9;
    }
}
