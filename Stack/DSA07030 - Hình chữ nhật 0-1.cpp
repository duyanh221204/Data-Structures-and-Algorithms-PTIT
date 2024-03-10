#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, m, d = 0;
        cin >> n >> m;
        int a[n + 2][m + 2], b[n + 2][m + 2] = {};
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                cin >> a[i][j];
                if (a[i][j]) b[i][j] = b[i - 1][j] + 1;
                else b[i][j] = 0;
            }
        }
        for (int i = 1; i <= n; ++i)
        {
            int k1[m + 2] = {}, k2[m + 2] = {};
            stack<int> st;
            for (int j = 1; j <= m; ++j)
            {
                while (st.size() && b[i][st.top()] >= b[i][j]) st.pop();
                if (st.size()) k1[j] = st.top() + 1;
                else k1[j] = 1;
                st.push(j);
            }
            st = {};
            for (int j = m; j; --j)
            {
                while (st.size() && b[i][st.top()] >= b[i][j]) st.pop();
                if (st.size()) k2[j] = st.top() - 1;
                else k2[j] = m;
                st.push(j);
            }
            for (int j = 1; j <= m; ++j) 
            {
                if (a[i][j]) d = max(b[i][j] * (k2[j] - k1[j] + 1), d);
            }
        }
        cout << d << "\n";
    }
}
