#include<bits/stdc++.h>
using namespace std;
char c[502][502];
int d, n, m, k[502][502], dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};
string s = "URDL";
void tt(int x, int y, int dem, char h)
{
    if (c[x][y] == 84 && dem < 3)
    {
        d = 1;
        return;
    }
    if (dem > 2)
    {
        k[x][y] = 0;
        return;
    }
    for (int i = 0; i < 4; ++i)
    {
        int tx = x + dx[i], ty = y + dy[i];
        if (x >= 1 && x <= n && y >= 1 && y <= m && c[x][y] != 42 && !k[x][y])
        {
            k[x][y] = 1;
            if (h == s[i]) tt(tx, ty, dem, s[i]);
            else tt(tx, ty, dem + 1, s[i]);
            k[x][y] = 0;
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
        cin >> n >> m;
        int x, y;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                cin >> c[i][j];
                k[i][j] = 0;
                if (c[i][j] == 83)
                {
                    x = i;
                    y = j;
                }
            }
        }
        tt(x, y, -1, 65);
        if (d) cout << "YES\n";
        else cout << "NO\n";
        d = 0;
    }
}
