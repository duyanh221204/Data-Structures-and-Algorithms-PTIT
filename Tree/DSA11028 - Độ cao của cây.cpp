#include<bits/stdc++.h>
using namespace std;
int d, m, k[100002];
vector<vector<int>> g(100002);
void tt(int x)
{
    for (int& i : g[x])
    {
        if (!k[i])
        {
            k[i] = 1;
            ++d;
            m = max(d, m);
            tt(i);
            --d;
            k[i] = 0;
        }
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
        for (int i = 1; i < n; ++i)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
        }
        tt(1);
        cout << m << "\n";
        d = m = 0;
        for (int i = 1; i <= n; ++i)
        {
            k[i] = 0;
            g[i].clear();
        }
    }
}
