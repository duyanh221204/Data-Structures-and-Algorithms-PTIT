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
        int v, e, u;
        cin >> v >> e >> u;
        vector<vector<pair<int, int>>> vp(v + 2);
        while (e--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            vp[x].push_back({y, z});
            vp[y].push_back({x, z});
        }
        int d[v + 2] = {}, k[v + 2] = {};
        fill(d + 1, d + v + 1, 2e9);
        d[u] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        pq.push({0, u});
        while (pq.size())
        {
            pair<int, int> p = pq.top();
            pq.pop();
            if (!k[p.second])
            {
                k[p.second] = 1;
                for (auto& i : vp[p.second])
                {
                    if (d[p.second] + i.second < d[i.first])
                    {
                        d[i.first] = d[p.second] + i.second;
                        pq.push({d[i.first], i.first});
                    }
                }
            }
        }
        for (int i = 1; i <= v; ++i) cout << d[i] << " ";
        cout << "\n";
    }
}
