#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long tt(long long a, long long b)
{
    if (!b) return 1;
    long long x = tt(a, b >> 1) % mod;
    (x *= x) %= mod;
    if (b & 1) (x *= a) %= mod;
    return x;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        while (1)
        {
            long long a, b;
            cin >> a >> b;
            if (!a && !b) break;
            cout << tt(a, b) << "\n";
        }
    }
}
