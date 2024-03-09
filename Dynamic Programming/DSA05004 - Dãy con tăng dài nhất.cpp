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
        int a[n], f[n] = {};
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            f[i] = 1;
            for (int j = 0; j < i; ++j)
            {
                if (a[i] > a[j]) f[i] = max(f[j] + 1, f[i]);
            }
            d = max(f[i], d);
        }
        cout << d << "\n";
    }
}
