#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> g(1002);
void tt(int x)
{
    queue<int> q;
    int k[1002] = {};
    q.push(x);
    k[x] = 1;
    while (q.size())
    {
        int m = q.front();
        q.pop();
        cout << m << " ";
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
        int v, e, u;
        cin >> v >> e >> u;
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
        }
        tt(u);
        cout << "\n";
        for (int i = 1; i <= v; ++i) g[i].clear();
    }
}
