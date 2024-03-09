#include<bits/stdc++.h>
using namespace std;
int n, a[15][15], f[15][32768];
int tt(int x, int t)
{
    if (t == (1 << n) - 1) return 0;
    if (f[x][t] > -1) return f[x][t];
    int s = 2e9;
    for (int i = 0; i < n; ++i)
    {
        if (!(t & (1 << i))) s = min(a[x][i] + tt(i, t | (1 << i)), s);
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
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j) cin >> a[i][j];
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 1 << n; ++j) f[i][j] = -1;
        }
        int d = 2e9;
        for (int i = 0; i < n; ++i) d = min(tt(i, 1 << i), d);
        cout << d << "\n";
    }
}
