#include<bits/stdc++.h>
using namespace std;
int n, k, d, a[42];
void tt()
{
    int x = k;
    while (x && a[x] == n - k + x) --x;
    if (!x)
    {
        d = 1;
        return;
    }
    ++a[x];
    for (int i = x + 1; i <= k; ++i) a[i] = a[i - 1] + 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        int f[42] = {};
        for (int i = 1; i <= k; ++i)
        {
            cin >> a[i];
            ++f[a[i]];
        }
        tt();
        if (d) cout << k << "\n";
        else
        {
            int dem = 0;
            for (int i = 1; i <= k; ++i)
            {
                if (!f[a[i]]) ++dem;
            }
            cout << dem << "\n";
        }
        d = 0;
    }
}
