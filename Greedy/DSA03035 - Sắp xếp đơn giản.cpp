#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int n, d = 0;
        cin >> n;
        int a[n + 2], k[n + 2] = {};
        for (int i = 1; i <= n; ++i) cin >> a[i];
        for (int i = 1; i <= n; ++i)
        {
            k[a[i]] = k[a[i] - 1] + 1;
            //cout << k[a[i] - 1] << " " << k[a[i]] << "\n";
            d = max(k[a[i]], d);
        }
        cout << n - d;
    }
}
