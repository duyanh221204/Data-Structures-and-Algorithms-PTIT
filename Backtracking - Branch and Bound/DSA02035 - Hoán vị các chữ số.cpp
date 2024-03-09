#include<bits/stdc++.h>
using namespace std;
int n, k, a[10], f[10];
long long d = 1e18;
string s[10];
void tt(int x)
{
    for (int i = 1; i <= k; ++i)
    {
        if (!f[i])
        {
            f[i] = 1;
            a[x] = i;
            if (x == k)
            {
                long long d1 = -1e18, d2 = 1e18;
                for (int j = 1; j <= n; ++j)
                {
                    string t = "";
                    for (int h = 1; h <= k; ++h) t += s[j][a[h] - 1];
                    //cout << t << "\n";
                    d1 = max(stoll(t), d1);
                    d2 = min(stoll(t), d2);
                }
                d = min(d1 - d2, d);
            }
            else tt(x + 1);
            f[i] = 0;
        }
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
        cin >> n >> k;
        for (int i = 1; i <= n; ++i) cin >> s[i];
        tt(1);
        cout << d;
    }
}
