#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long gt(int n)
{
    long long s = 1;
    for (int i = 2; i <= n; ++i) (s *= i) %= mod;
    return s;
}
long long tt(long long n, int k)
{
    if (!k) return 1;
    long long s = tt(n, k >> 1) % mod;
    (s *= s) %= mod;
    if (k & 1) (s *= n) %= mod;
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
        int n, k;
        cin >> n >> k;
        if (n < k) cout << "0";
        else cout << (gt(n) * tt(gt(n - k), mod - 2)) % mod;
        cout << "\n";
    }
}
