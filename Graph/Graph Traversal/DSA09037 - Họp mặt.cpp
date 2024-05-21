#include<bits/stdc++.h>
using namespace std;
int a[102], d[1002], h[1002];
vector<vector<int>> g(1002);
void tt(int x)
{
    ++h[x];
    d[x] = 1;
    for (int& i : g[x])
    {
        if (!d[i]) tt(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int k, n, m, dem = 0;
        cin >> k >> n >> m;
        for (int i = 1; i <= k; ++i) cin >> a[i];
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
        }
        for (int i = 1; i <= k; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                //cout << h[j] << " ";
                d[j] = 0;
            }
            //cout << "\n";
            tt(a[i]);
        }
        for (int i = 1; i <= n; ++i)
        {
            if (h[i] == k) ++dem;
        }
        cout << dem;
    }
}
