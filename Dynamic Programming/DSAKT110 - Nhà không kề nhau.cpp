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
        int n;
        cin >> n;
        long long a[n + 2], f[n + 2] = {};
        for (int i = 1; i <= n; ++i) cin >> a[i];
        f[1] = a[1];
        for (int i = 2; i <= n; ++i) f[i] = max(f[i - 1], f[i - 2] + a[i]);
        cout << f[n] << "\n";
    }
}
