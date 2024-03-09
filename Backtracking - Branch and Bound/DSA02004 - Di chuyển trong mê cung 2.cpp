#include<bits/stdc++.h>
using namespace std;
int n, d, a[10][10], k[10][10], dx[4] = {1, 0, 0, -1}, dy[4] = {0, -1, 1, 0};
string s, h = "DLRU";
void tt(int x, int y)
{
    if (x == n && y == n)
    {
        d = 1;
        cout << s << " ";
    }
    else
    {
        for (int i = 0; i < 4; ++i)
        {
            int tx = x + dx[i], ty = y + dy[i];
            if (tx >= 1 && tx <= n && ty >= 1 && ty <= n && !k[tx][ty] && a[tx][ty])
            {
                s += h[i];
                k[tx][ty] = 1;
                tt(tx, ty);
                k[tx][ty] = 0;
                s.pop_back();
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
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                cin >> a[i][j];
                k[i][j] = 0;
            }
        }
        if (!a[1][1] || !a[n][n]) cout << "-1";
        else
        {
            k[1][1] = 1;
            tt(1, 1);
            if (!d) cout << "-1";
        }
        cout << "\n";
        s = "";
        d = 0;
    }
}
