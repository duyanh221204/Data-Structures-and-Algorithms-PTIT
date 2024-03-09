#include<bits/stdc++.h>
using namespace std;
int m, n, d, a[102][102];
void tt(int x, int y)
{
    if (x == m && y == n) ++d;
    else
    {
        if (x < m) tt(x + 1, y);
        if (y < n) tt(x, y + 1);
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
        cin >> m >> n;
        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j) cin >> a[i][j];
        }
        tt(1, 1);
        cout << d << "\n";
        d = 0;
    }
}
