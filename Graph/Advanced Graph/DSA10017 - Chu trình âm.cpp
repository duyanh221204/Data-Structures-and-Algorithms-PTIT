#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int v, e, h = 0;
        cin >> v >> e;
        int d[v + 2] = {};
        vector<pair<int, pair<int, int>>> vp;
        while (e--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            vp.push_back({z, {x, y}});
        }
        fill(d + 1, d + v + 1, 2e9);
        d[v] = 0;
        for (int i = 1; i <= v; ++i)
        {
            for (auto& j : vp)
            {
                if (d[j.second.first] + j.first < d[j.second.second])
                {
                    if (i == v)
                    {
                        h = 1;
                        break;
                    }
                    d[j.second.second] = d[j.second.first] + j.first;
                }
            }
        }
        cout << h << "\n";
    }
}
