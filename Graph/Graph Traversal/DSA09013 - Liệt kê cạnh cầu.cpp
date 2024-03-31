#include<bits/stdc++.h>
using namespace std;
int k[1002];
vector<vector<int>> g(1002);
void tt(int x, int y, int z)
{
    queue<int> q;
    q.push(x);
    k[x] = 1;
    while (q.size())
    {
        int m = q.front();
        q.pop();
        for (int& i : g[m])
        {
            if ((m == y && i == z) || (i == y && m == z)) continue;
            if (!k[i])
            {
                k[i] = 1;
                q.push(i);
            }
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
        int v, e;
        cin >> v >> e;
        pair<int, int> p[e];
        for (int i = 0; i < e; ++i)
        {
            cin >> p[i].first >> p[i].second;
            g[p[i].first].push_back(p[i].second);
            g[p[i].second].push_back(p[i].first);
        }
        for (auto& i : p)
        {
            int d = 0;
            for (int j = 1; j <= v; ++j) k[j] = 0;
            for (int j = 1; j <= v; ++j)
            {
                if (!k[j])
                {
                    ++d;
                    tt(j, i.first, i.second);
                }
                if (d > 1)
                {
                    cout << i.first << " " << i.second << " ";
                    break;
                }
            }
        }
        for (int i = 1; i <= v; ++i) g[i].clear();
        cout << "\n";
    }
}
