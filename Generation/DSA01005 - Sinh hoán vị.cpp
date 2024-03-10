#include<bits/stdc++.h>
using namespace std;
int n, d, a[1002];
void tt()
{
    int x = n - 1, y = n, l, r;
    while (x && a[x] > a[x + 1]) --x;
    if (!x)
    {
        d = 1;
        return;
    }
    while (y && a[x] > a[y]) --y;
    if (!y)
    {
        d = 1;
        return;
    }
    swap(a[x], a[y]);
    l = x + 1;
    r = n;
    while (l < r) swap(a[l++], a[r--]);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 1; i <= n; ++i) a[i] = i;
        while (!d)
        {
            for (int i = 1; i <= n; ++i) cout << a[i];
            cout << " ";
            tt();
        }
        cout << "\n";
        d = 0;
    }
}
