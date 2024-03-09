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
        int n, m;
        cin >> n >> m;
        long long f[n + 2][m + 2];
        for (int i = 0; i <= n; ++i)
        {
            for (int j = 0; j <= m; ++j) f[i][j] = 1;
        }
        for (int i = n - 1; ~i; --i)
        {
            for (int j = m - 1; ~j; --j) f[i][j] = f[i + 1][j] + f[i][j + 1];
        }
        cout << f[0][0] << "\n";
    }
}
