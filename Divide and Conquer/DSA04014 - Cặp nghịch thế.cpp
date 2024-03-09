#include<bits/stdc++.h>
using namespace std;
long long a[1000002];
long long merge(int l, int x, int r)
{
    vector<long long> v1(a + l, a + x + 1), v2(a + x + 1, a + r + 1);
    int x1 = 0, x2 = 0, d1 = v1.size(), d2 = v2.size();
    long long d = 0;
    while (x1 < d1 && x2 < d2)
    {
        if (v1[x1] <= v2[x2]) a[l++] = v1[x1++];
        else
        {
            d += (d1 - x1);
            a[l++] = v2[x2++];
        }
    }
    while (x1 < d1) a[l++] = v1[x1++];
    while (x2 < d2) a[l++] = v2[x2++];
    //for (int i = 0; i <= r; ++i) cout << a[i] << " ";
    //cout << "\n";
    return d;
}
long long tt(int l, int r)
{
    long long d = 0;
    if (l < r)
    {
        int mid = (l + r) >> 1;
        d += (tt(l, mid) + tt(mid + 1, r) + merge(l, mid, r));
        //cout << d << "\n";
    }
    return d;
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
        //fill(a, a + 1000002, 0);
        for (int i = 0; i < n; ++i) cin >> a[i];
        cout << tt(0, n - 1) << "\n";
    }
}
