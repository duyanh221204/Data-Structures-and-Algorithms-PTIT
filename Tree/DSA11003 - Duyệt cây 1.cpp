#include<bits/stdc++.h>
using namespace std;
int x, a[1002], b[1002], k[10002];
void tt(int l, int r)
{
    if (l <= r)
    {
        int m = k[b[x++]];
        tt(l, m - 1);
        tt(m + 1, r);
        cout << a[m] << " ";
    }
}
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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            k[a[i]] = i;
        }
        for (int i = 0; i < n; ++i) cin >> b[i];
        tt(0, n - 1);
        cout << "\n";
        x = 0;
    }
}
