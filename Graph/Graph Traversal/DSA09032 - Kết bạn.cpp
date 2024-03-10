#include<bits/stdc++.h>
using namespace std;
int k[100002];
vector<vector<int>> g(100002);
void tt(int x, int& d)
{
    queue<int> q;
    q.push(x);
    k[x] = 1;
    ++d;
    while (q.size())
    {
        int m = q.front();
        q.pop();
        for (int& i : g[m])
        {
            if (!k[i])
            {
                ++k[i];
                ++d;
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
        int n, m, d = 0;
        cin >> n >> m;
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        for (int i = 1; i <= n; ++i)
        {
            if (!k[i])
            {
                int s = 0;
                tt(i, s);
                d = max(s, d);
            }
        }
        cout << d << "\n";
        for (int i = 1; i <= n; ++i)
        {
            k[i] = 0;
            g[i].clear();
        }
    }
}
