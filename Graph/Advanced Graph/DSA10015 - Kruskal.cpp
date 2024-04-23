#include<bits/stdc++.h>
using namespace std;
int p[102];
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
        vector<pair<int, pair<int, int>>> vp;
        while (e--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            vp.push_back({z, {x, y}});
        }
        for (int i = 1; i <= v; ++i) p[i] = i;
        sort(vp.begin(), vp.end());
        for (auto& i : vp)
        {
            int x = tt(i.second.first), y = tt(i.second.second);
            if (x != y)
            {
                d += i.first;
                p[x] = y;
            }
        }
        cout << d << "\n";
    }
}
