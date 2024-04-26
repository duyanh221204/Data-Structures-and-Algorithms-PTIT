#include<bits/stdc++.h>
using namespace std;
int n, mod = 1e9 + 7;
long long p[100002], t1[100002], t2[100002];
void update1(long long x, long long y)
{
    while (x <= n)
    {
        (t1[x] += y) %= mod;
        x += (x & -x);
    }
}
void update2(long long x, long long y)
{
    while (x >= 1)
    {
        (t2[x] += y) %= mod;
        x -= (x & -x);
    }
}
long long tt(long long x, long long y)
{
    if (!y) return 1;
    long long s = tt(x, y >> 1) % mod;
    (s *= s) %= mod;
    if (y & 1) (s *= x) %= mod;
    return s;
}
long long tt1(long long x)
{
    long long s = 0;
    while (x >= 1)
    {
        (s += t1[x]) %= mod;
        x -= (x & -x);
    }
    return s;
}
long long tt2(long long x)
{
    long long s = 0;
    while (x <= n)
    {
        (s += t2[x]) %= mod;
        x += (x & -x);
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        n = s.size();
        s = " " + s;
        p[0] = 1;
        for (int i = 1; i <= n; ++i) p[i] = (p[i - 1] * 101) % mod;
        for (int i = 1; i <= n; ++i)
        {
            update1(i, (s[i] * p[i]) % mod);
            update2(i, (s[i] * p[n - i + 1]) % mod);
        }
        int q;
        cin >> q;
        while (q--)
        {
            char c;
            cin >> c;
            if (c == 99)
            {
                int u;
                char x;
                cin >> u >> x;
                update1(u, ((x - s[u] + mod) % mod * p[u] % mod) % mod);
                update2(u, ((x - s[u] + mod) % mod * p[n - u + 1] % mod) % mod);
                s[u] = x;
            }
            else
            {
                int l, r;
                cin >> l >> r;
                long long x = ((tt1(r) - tt1(l - 1) + mod) % mod * tt(p[l], mod - 2) % mod) % mod;
                long long y = ((tt2(l) - tt2(r + 1) + mod) % mod * tt(p[n - r + 1], mod - 2) % mod) % mod;
                if (x == y) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
}
