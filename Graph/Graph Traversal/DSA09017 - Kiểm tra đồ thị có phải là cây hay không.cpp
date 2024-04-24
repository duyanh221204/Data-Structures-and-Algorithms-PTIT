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
        else if (p[x] != i) return 1;
    }
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
        int n, d = 0;
        cin >> n;
        for (int i = 1; i < n; ++i)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j) k[j] = p[j] = 0;
            if (tt(i))
            {
                d = 1;
                cout << "NO\n";
                break;
            }
        }
        if (!d) cout << "YES\n";
        for (int i = 1; i <= n; ++i)
        {
            k[i] = p[i] = 0;
            g[i].clear();
        }
    }
}
