#include<bits/stdc++.h>
using namespace std;
int n, a[20][20], f[20][1048576];
int tt(int x, int t)
{
    if (x == n) return 0;
    if (f[x][t] > -1) return f[x][t];
    int s = 0;
    for (int i = 0; i < n; ++i)
    {
        if (!(t & (1 << i))) s = max(a[x][i] + tt(x + 1, t | (1 << i)), s);
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
        cout << tt(0, 0) << "\n";
    }
}
