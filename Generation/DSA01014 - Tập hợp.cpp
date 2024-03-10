#include<bits/stdc++.h>
using namespace std;
int n, k, s, d, a[22];
void tt(int x)
{
    for (int i = a[x - 1] + 1; i <= n - k + x; ++i)
    {
        a[x] = i;
        if (x == k)
        {
            int t = 0, b[22] = {};
            for (int j = 1; j <= k; ++j) b[a[j]] = 1;
            for (int j = 1; j <= n; ++j)
            {
                t += (b[j] * j);
                //cout << b[j] << " ";
            }
            //cout << "\n";
            if (t == s) ++d;
            //cout << t << " ";
        }
        else tt(x + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        while (cin >> n >> k >> s)
        {
            if (!n && !k && !s) break;
            d = 0;
            fill(a, a + 22, 0);
            tt(1);
            cout << d << "\n";
        }
    }
}
