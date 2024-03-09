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
        int n, s = 0;
        cin >> n;
        int a[n + 2], f[n + 2] = {};
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            f[i] = a[i];
            for (int j = 1; j < i; ++j)
            {
                if (a[i] > a[j]) f[i] = max(f[j] + a[i], f[i]);
            }
            s = max(f[i], s);
        }
        cout << s << "\n";
    }
}
