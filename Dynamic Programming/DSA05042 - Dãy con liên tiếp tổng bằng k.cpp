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
        int n, l = 1, r = 1, d = 0;
        long long k;
        cin >> n >> k;
        long long f[n + 2] = {};
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            f[i] = f[i - 1] + x;
        }
        while (l <= r && r <= n)
        {
            while (r <= n && f[r] - f[l - 1] < k) ++r;
            if (f[r] - f[l - 1] > k && l <= r) ++l;
            else if (f[r] - f[l - 1] == k)
            {
                d = 1;
                cout << "YES\n";
                break;
            }
        }
        if (!d) cout << "NO\n";
    }
}
