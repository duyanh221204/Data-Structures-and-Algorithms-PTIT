#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int n, c;
        cin >> c >> n;
        int a[n + 2], f[n + 2][c + 2] = {};
        for (int i = 1; i <= n; ++i) cin >> a[i];
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= c; ++j)
            {
                if (j < a[i]) f[i][j] = f[i - 1][j];
                else f[i][j] = max(f[i - 1][j], f[i - 1][j - a[i]] + a[i]);
            }
        }
        cout << f[n][c];
    }
}
