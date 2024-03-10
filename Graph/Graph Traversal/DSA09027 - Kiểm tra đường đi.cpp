#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> g(1002);
string tt(int x, int y)
{
    queue<int> q;
    int k[1002] = {};
    q.push(x);
    k[x] = 1;
    while (q.size())
    {
        int m = q.front();
        q.pop();
        if (m == y) return "YES\n";
        for (int& i : g[m])
        {
            if (!k[i])
            {
                k[i] = 1;
                q.push(i);
            }
        }
    }
    return "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, m, q;
        cin >> n >> m;
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            cout << tt(x, y);
        }
        for (int i = 1; i <= n; ++i) g[i].clear();
    }
}
