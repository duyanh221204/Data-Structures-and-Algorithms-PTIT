#include<bits/stdc++.h>
using namespace std;
int k[1002], p[1002];
vector<vector<int>> g(1002);
void tt(int x)
{
    k[x] = 1;
    for (int& i : g[x])
    {
        if (!k[i])
        {
            p[i] = x;
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
        int v, e, s, t;
        cin >> v >> e >> s >> t;
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        tt(s);
        if (!k[t]) cout << "-1";
        else
        {
            vector<int> v1;
            while (s != t)
            {
                v1.push_back(t);
                t = p[t];
            }
            cout << s << " ";
            for (int i = v1.size() - 1; ~i; --i) cout << v1[i] << " ";
        }
        cout << "\n";
        for (int i = 1; i <= v; ++i)
        {
            k[i] = p[i] = 0;
            g[i].clear();
        }
    }
}
