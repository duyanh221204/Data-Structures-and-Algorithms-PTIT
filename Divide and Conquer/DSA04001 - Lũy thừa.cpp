#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long tt(long long n, long long k)
{
    if (!k) return 1;
    if (k == 1) return n;
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
        long long n, k;
        cin >> n >> k;
        cout << tt(n, k) << "\n";
    }
}
