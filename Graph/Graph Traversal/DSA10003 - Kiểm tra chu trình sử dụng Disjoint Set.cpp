#include<bits/stdc++.h>
using namespace std;
int p[1002];
int tt(int x)
{
    while (x != p[x]) x = p[x];
    return p[x];
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
        vector<pair<int, int>> vp;
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vp.push_back({x, y});
        }
        for (int i = 1; i <= v; ++i) p[i] = i;
        for (auto& i : vp)
        {
            int x = tt(i.first), y = tt(i.second);
            if (x == y)
            {
                d = 1;
                cout << "YES\n";
                break;
            }
            p[x] = y;
        }
        if (!d) cout << "NO\n";
    }
}
