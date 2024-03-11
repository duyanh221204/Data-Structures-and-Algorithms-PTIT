#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1, mod = 1e9 + 7;
    cin >> T;
    long long f[102][902] = {};
    for (int i = 1; i <= 9; ++i) f[1][i] = 1;
    for (int i = 2; i <= 100; ++i)
    {
        for (int j = 0; j <= 900; ++j)
        {
            for (int k = 0; k <= 9; ++k)
            {
                if (j >= k) (f[i][j] += f[i - 1][j - k]) %= mod;
            }
        }
    }
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        if (k > 900) cout << "0";
        else cout << f[n][k];
        cout << "\n";
    }
}
