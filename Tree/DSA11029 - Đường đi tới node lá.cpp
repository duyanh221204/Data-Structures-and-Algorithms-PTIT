#include<bits/stdc++.h>
using namespace std;
int p[1002];
vector<vector<int>> g(1002);
void tt(int x)
{
    int k[1002] = {};
    queue<int> q;
    k[x] = 1;
    q.push(x);
    while (q.size())
    {
        int m = q.front();
        q.pop();
        for (int& i : g[m])
        {
            if (!k[i])
            {
                k[i] = 1;
                p[i] = m;
                q.push(i);
            }
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
        int n, k[1002] = {};
        cin >> n;
        for (int i = 1; i < n; ++i)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            ++k[x];
        }
        tt(1);
        for (int i = 2; i <= n; ++i)
        {
            if (!k[i])
            {
                stack<int> st;
                st.push(i);
                int x = i;
                while (p[x])
                {
                    x = p[x];
                    st.push(x);
                }
                while (st.size())
                {
                    cout << st.top() << " ";
                    st.pop();
                }
                cout << "\n";
            }
        }
        for (int i = 1; i <= n; ++i)
        {
            p[i] = 0;
            g[i].clear();
        }
    }
}
