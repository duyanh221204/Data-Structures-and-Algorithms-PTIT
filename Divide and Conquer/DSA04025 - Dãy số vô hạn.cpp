#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
struct mt
{
    long long a[2][2];
    mt operator * (mt& b)
    {
        mt c = *this, d;
        for (int i = 0; i <= 1; ++i)
        {
            for (int j = 0; j <= 1; ++j)
            {
                d.a[i][j] = 0;
                for (int k = 0; k <= 1; ++k) (d.a[i][j] += (c.a[i][k] * b.a[k][j]) % mod) %=mod;
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
    while (T--)
    {
        int n;
        cin >> n;
        mt a, b;
        a.a[0][0] = a.a[0][1] = a.a[1][0] = 1;
        a.a[1][1] = 0;
        b = tt(a, n - 1);
        cout << b.a[0][0] << "\n";
    }
}
