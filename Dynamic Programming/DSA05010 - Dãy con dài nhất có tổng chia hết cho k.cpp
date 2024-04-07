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
        int n, k, d = 0;
        cin >> n >> k;
        int a[n + 2], f[n + 2][k] = {};
        for (int i = 1; i < k; ++i) f[0][i] = -2e9;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            for (int j = 0; j < k; ++j) f[i][j] = max(f[i - 1][j], f[i - 1][(j - a[i] % k + k) % k] + 1);
        }
        cout << f[n][0] << "\n";
    }
}
