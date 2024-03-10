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
        int a[n];
        for (int& i : a) cin >> i;
        long long f[k + 2] = {};
        f[0] = 1;
        for (int i = 1; i <= k; ++i)
        {
            for (int& j : a)
            {
                if (i >= j) (f[i] += f[i - j]) %= mod;
            }
        }
        cout << f[k] << "\n";
    }
}
