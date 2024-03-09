#include<bits/stdc++.h>
using namespace std;
int N, K, mod = 1e9 + 7;
struct mt
{
    long long a[10][10];
    mt operator * (mt& b)
    {
        mt c = *this, d;
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < N; ++j)
            {
                d.a[i][j] = 0;
                for (int k = 0; k < N; ++k) (d.a[i][j] += (c.a[i][k] * b.a[k][j]) % mod) %= mod;
            }
        }
        return d;
    }
};
mt tt(mt& a, int n)
{
    if (n == 1) return a;
    mt x = tt(a, n >> 1);
    x = x * x;
    if (n & 1) x = x * a;
    return x;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    //cin.ignore();
    while (T--)
    {
        cin >> N >> K;
        mt a, b;
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < N; ++j) cin >> a.a[i][j];
        }
        b = tt(a, K);
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < N; ++j) cout << b.a[i][j] << " ";
            cout << "\n";
        }
    }
}
