#include<bits/stdc++.h>
using namespace std;
struct ds
{
    int x, y, z;
    friend int operator == (ds& a, ds& b)
    {
        return a.x == b.x && a.y == b.y && a.z == b.z;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1, dx[6] = {0, 0, 1, 0, 0, -1}, dy[6] = {-1, 0, 0, 1, 0, 0}, dz[6] = {0, -1, 0, 0, 1, 0};
    cin >> T;
    while (T--)
    {
        int a, b, c, d = 0;
        cin >> a >> b >> c;
        int f[a + 2][b + 2][c + 2] = {};
        char h[a + 2][b + 2][c + 2];
        ds s = {}, e = {};
        for (int i = 1; i <= a; ++i)
        {
            for (int j = 1; j <= b; ++j)
            {
                for (int k = 1; k <= c; ++k)
                {
                    cin >> h[i][j][k];
                    if (h[i][j][k] == 83) s = {i, j, k};
                    if (h[i][j][k] == 69) e = {i, j, k};
                }
            }
        }
        queue<pair<ds, int>> q;
        q.push({s, 0});
        f[s.x][s.y][s.z] = 1;
        while (q.size())
        {
            pair<ds, int> p = q.front();
            q.pop();
            if (p.first == e)
            {
                d = 1;
                cout << p.second;
                break;
            }
            for (int i = 0; i < 6; ++i)
            {
                int x = p.first.x + dx[i], y = p.first.y + dy[i], z = p.first.z + dz[i];
                if (x >= 1 && x <= a && y >= 1 && y <= b && z >= 1 && z <= c && !f[x][y][z] && h[x][y][z] != 35)
                {
                    f[x][y][z] = 1;
                    q.push({{x, y, z}, p.second + 1});
                }
            }
        }
        if (!d) cout << "-1";
        cout << "\n";
    }
}
