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
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        int f[n + 2];
        f[1] = x;
        for (int i = 2; i <= n; ++i)
        {
            if (i & 1 ^ 1) f[i] = min(f[i - 1] + x, f[i >> 1] + z);
            else f[i] = min(f[i - 1] + x, f[(i >> 1) + 1] + y + z);
        }
        cout << f[n] << "\n";
    }
}
