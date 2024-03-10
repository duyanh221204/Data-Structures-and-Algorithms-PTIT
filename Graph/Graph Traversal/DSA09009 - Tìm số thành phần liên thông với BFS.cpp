#include<bits/stdc++.h>
using namespace std;
int k[1002];
vector<vector<int>> g(1002);
void tt(int x)
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
        cout << d << "\n";
        for (int i = 1; i <= v; ++i)
        {
            k[i] = 0;
            g[i].clear();
        }
    }
}
