#include<bits/stdc++.h>
using namespace std;
int d, k[1002], p[1002];
vector<vector<int>> g(1002);
void tt(int x)
{
    if (d) return;
    for (int& i : g[x])
    {
        if (!k[i])
        {
            k[i] = 1;
            p[i] = x;
            tt(i);
        }
        else if (i == 1 && p[x] != 1)
        {
            d = 1;
            stack<int> st;
            while (x != 1)
            {
                st.push(x);
                x = p[x];
            }
            cout << "1 ";
            while (st.size())
            {
                cout << st.top() << " ";
                st.pop();
            }
            cout << "1";
            return;
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
        int n, m;
        cin >> n >> m;
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        for (int i = 1; i <= n; ++i) sort(g[i].begin(), g[i].end());
        ++k[1];
        tt(1);
        if (!d) cout << "NO";
        cout << "\n";
        for (int i = 1; i <= n; ++i)
        {
            k[i] = p[i] = 0;
            g[i].clear();
        }
        d = 0;
    }
}
