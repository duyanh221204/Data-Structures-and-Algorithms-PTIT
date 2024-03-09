#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long tt(long long a, long long b)
{
    if (!b) return 1;
    long long x = tt(a, b >> 1);
    (x *= x) %= mod;
    if (b & 1) (x *= a) %= mod;
    return x;
}
long long gt(long long n)
{
    long long s = 1;
    for (long long i = 2; i <= n; ++i) (s *= i) %= mod;
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        long long n, k;
        cin >> n >> k;
        cout << (gt(n) % mod * tt((gt(k) * gt(n - k)) % mod, mod - 2) % mod) % mod << "\n";
    }
}
