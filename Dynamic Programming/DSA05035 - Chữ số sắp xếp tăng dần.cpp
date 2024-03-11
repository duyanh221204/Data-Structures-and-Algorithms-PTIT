#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1, mod = 1e9 + 7;
    cin >> T;
    long long f[102][10] = {};
    for (int i = 0; i <= 9; ++i) f[1][i] = 1;
    for (int i = 2; i <= 100; ++i)
    {
        for (int j = 0; j <= 9; ++j)
        {
            for (int k = 0; k <= j; ++k) (f[i][j] += f[i - 1][k]) %= mod;
        }
    }
    while (T--)
    {
        int n;
        cin >> n;
        long long d = 0;
        for (int i = 0; i <= 9; ++i) (d += f[n][i]) %= mod;
        cout << d << "\n";
    }
}
