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
        double a[n + 2], b[n + 2];
        int f[n + 2] = {};
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i] >> b[i];
            f[i] = 1;
            for (int j = 1; j < i; ++j)
            {
                if (a[i] > a[j] && b[i] < b[j]) f[i] = max(f[j] + 1, f[i]);
            }
            d = max(f[i], d);
        }
        cout << d << "\n";
    }
}
