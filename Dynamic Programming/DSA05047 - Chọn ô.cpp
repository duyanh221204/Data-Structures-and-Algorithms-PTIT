#include<bits/stdc++.h>
using namespace std;
int n, a[4][10000], f[10000][16];
int tt(int x, int t)
{
    if (x == n) return 0;
    if (f[x][t] > -1) return f[x][t];
    int s = 0;
    for (int i = 0; i < 16; ++i)
    {
        int d = 0, k = 0;
        for (int j = 0; j < 4; ++j)
        {
            if ((i & (1 << j) && t & (1 << j)) || (j < 3 && i & (1 << j) && i & (1 << (j + 1))))
            {
                d = 1;
                break;
            }
            if (i & (1 << j)) k += a[j][x];
        }
        if (!d) s = max(k + tt(x + 1, i), s);
    }
    return f[x][t] = s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int d = -2e9;
        cin >> n;
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> a[i][j];
                d = max(a[i][j], d);
            }
        }
        if (d < 1) cout << d;
        else
        {
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < 16; ++j) f[i][j] = -1;
            }
            cout << tt(0, 0);
        }
        cout << "\n";
    }
}
