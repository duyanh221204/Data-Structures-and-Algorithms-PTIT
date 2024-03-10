#include<bits/stdc++.h>
using namespace std;
int a[10000002];
int tt(int n)
{
    int x, l = 1, r = n;
    while (l <= r)
    {
        int mid = l + r >> 1;
        if (a[mid] <= a[n])
        {
            x = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return x;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        if (x == a[n]) cout << n << "\n";
        else
        {
            int d = tt(n), it;
            if (x < a[n]) it = lower_bound(a + d, a + n + 1, x) - a;
            else it = lower_bound(a + 1, a + d, x) - a;
            cout << it << "\n";
        }
    }
}
