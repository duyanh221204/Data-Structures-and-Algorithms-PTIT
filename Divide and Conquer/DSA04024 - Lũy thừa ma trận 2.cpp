#include<bits/stdc++.h>
using namespace std;
int n, mod = 1e9 + 7;
struct mt
{
    long long a[12][12];
    mt operator * (mt& b)
    {
        mt c = *this, d;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                d.a[i][j] = 0;
                for (int k = 0; k < n; ++k) (d.a[i][j] += (c.a[i][k] * b.a[k][j]) % mod) %= mod;
            }
        }
        return d;
    }
};
mt tt(mt& a, int k)
{
    if (k == 1) return a;
    mt b = tt(a, k >> 1);
    b = b * b;
    if (k & 1) b = b * a;
    return b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int k;
        cin >> n >> k;
        mt a, b;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j) cin >> a.a[i][j];
        }
        b = tt(a, k);
        long long s = 0;
        for (int i = 0; i < n; ++i) (s += b.a[i][n - 1]) %= mod;
        cout << s << "\n";
    }
}
