#include<bits/stdc++.h>
using namespace std;
int n, m, k[102][102], dx[8] = {0, 1, 1, 1, 0, -1, -1, -1}, dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
char c[102][102];
void tt(int x, int y)
{
    queue<pair<int, int>> q;
    k[x][y] = 1;
    q.push({x, y});
    while (q.size())
    {
        pair<int, int> p = q.front();
        q.pop();
        for (int i = 0; i < 8; ++i)
        {
            int tx = p.first + dx[i], ty = p.second + dy[i];
            if (tx >= 1 && tx <= n && ty >= 1 && ty <= m && c[tx][ty] == 87 && !k[tx][ty])
            {
                k[tx][ty] = 1;
                q.push({tx, ty});
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j) cin >> c[i][j];
        }
        int d = 0;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                if (c[i][j] == 87 && !k[i][j])
                {
                    ++d;
                    tt(i, j);
                }
            }
        }
        cout << d;
    }
}
