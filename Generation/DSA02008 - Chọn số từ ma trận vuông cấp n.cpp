#include<bits/stdc++.h>
using namespace std;
int n, d, a[12];
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
    //cin >> T;
    while (T--)
    {
        int k;
        cin >> n >> k;
        int b[n + 2][n + 2];
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j) cin >> b[i][j];
            a[i] = i;
        }
        vector<vector<int>> v;
        while (!d)
        {
            int s = 0;
            for (int i = 1; i <= n; ++i) s += b[i][a[i]];
            if (s == k)
            {
                vector<int> v1;
                for (int i = 1; i <= n; ++i) v1.push_back(a[i]);
                v.push_back(v1);
            }
            tt();
        }
        cout << v.size() << "\n";
        for (vector<int>& i : v)
        {
            for (int& j : i) cout << j << " ";
            cout << "\n";
        }
    }
}
