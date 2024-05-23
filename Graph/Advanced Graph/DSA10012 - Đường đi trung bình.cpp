#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, m, s = 0, dem = 0;
        cin >> n >> m;
        int d[n + 2][n + 2];
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (i == j) d[i][j] = 0;
                else d[i][j] = 1e9;
            }
        }
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            d[x][y] = 1;
        }
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                for (int k = 1; k <= n; ++k)
                {
                    if (d[j][i] + d[i][k] < d[j][k]) d[j][k] = d[j][i] + d[i][k];
                }
            }
        }
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (d[i][j] && d[i][j] < 1e9)
                {
                    ++dem;
                    s += d[i][j];
                }
            }
        }
        cout << setprecision(2) << fixed << (double) s / dem << "\n";
    }
}
