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
        long long d = -1e18, a[n], f1[n], f2[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            f1[i] = f2[i] = a[i];
        }
        for (int i = 1; i < n; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                if (a[i] > a[j]) f1[i] = max(f1[j] + a[i], f1[i]);
            }
        }
        for (int i = n - 2; ~i; --i)
        {
            for (int j = n - 1; j > i; --j)
            {
                if (a[i] > a[j]) f2[i] = max(f2[j] + a[i], f2[i]);
            }
        }
        for (int i = 0; i < n; ++i) d = max(f1[i] + f2[i] - a[i], d);
        cout << d << "\n";
    }
}
