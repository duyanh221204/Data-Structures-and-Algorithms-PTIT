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
        int n, k, mod = 1e9 + 7;
        cin >> n >> k;
        int f[n + 2] = {};
        f[0] = f[1] = 1;
        for (int i = 2; i <= n; ++i)
        {
            for (int j = 1; j <= min(i, k); ++j) (f[i] += f[i - j]) %= mod;
        }
        cout << f[n] << "\n";
    }
}
