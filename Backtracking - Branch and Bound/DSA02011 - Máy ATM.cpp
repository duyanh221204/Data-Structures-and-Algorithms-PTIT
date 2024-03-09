#include<bits/stdc++.h>
using namespace std;
int n, s, t, dem, d = 2e9, a[32], b[32];
void tt(int x)
{
    if (dem + (s - t) / b[x] < d)
    {
        for (int i = 0; i <= 1; ++i)
        {
            if (x == n)
            {
                if (dem + i < d && t + a[x] * i == s) d = dem + i;
            }
            else
            {
                t += (a[x] * i);
                dem += i;
                tt(x + 1);
                dem -= i;
                t -= (a[x] * i);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        cin >> n >> s;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        b[n] = a[n];
        for (int i = n - 1; i; --i) b[i] = max(a[i], b[i + 1]);
        tt(1);
        if (d == 2e9) cout << "-1";
        else cout << d;
        cout << "\n";
        dem = t = 0;
        d = 2e9;
    }
}
