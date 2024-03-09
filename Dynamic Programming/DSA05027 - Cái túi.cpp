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
        int n, v;
        cin >> n >> v;
        int a[n + 2], c[n + 2], f[n + 2][v + 2] = {};
        for (int i = 1; i <= n; ++i) cin >> a[i];
        for (int i = 1; i <= n; ++i) cin >> c[i];
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= v; ++j)
            {
                if (j < a[i]) f[i][j] = f[i - 1][j];
                else f[i][j] = max(f[i - 1][j], f[i - 1][j - a[i]] + c[i]);
            }
        }
        cout << f[n][v] << "\n";
    }
}
