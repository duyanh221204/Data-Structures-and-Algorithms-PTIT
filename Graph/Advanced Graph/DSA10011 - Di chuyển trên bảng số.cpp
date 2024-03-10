#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1, dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 2][m + 2], k[n + 2][m + 2];
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                cin >> a[i][j];
                k[i][j] = 0;
            }
        }
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
        pq.push({a[1][1], {1, 1}});
        k[1][1] = 1;
        while (pq.size())
        {
            pair<int, pair<int, int>> p = pq.top();
            pq.pop();
            if (p.second.first == n && p.second.second == m)
            {
                cout << p.first << "\n";
                break;
            }
            for (int i = 0; i < 4; ++i)
            {
                int x = p.second.first + dx[i], y = p.second.second + dy[i];
                if (x >= 1 && x <= n && y >= 1 && y <= m && !k[x][y])
                {
                    k[x][y] = 1;
                    pq.push({p.first + a[x][y], {x, y}});
                }
            }
        }
    }
}
