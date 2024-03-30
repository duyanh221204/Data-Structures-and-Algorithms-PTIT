#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, d = 0;
        cin >> n;
        pair<long long, long long> p[n + 2];
        int f[n + 2];
        for (int i = 1; i <= n; ++i)
        {
            cin >> p[i].first >> p[i].second;
            f[i] = 1;
        }
        sort(p + 1, p + n + 1);
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j < i; ++j)
            {
                if (p[i].first > p[j].second) f[i] = max(f[j] + 1, f[i]);
            }
            d = max(f[i], d);
        }
        cout << d << "\n";
    }
}
