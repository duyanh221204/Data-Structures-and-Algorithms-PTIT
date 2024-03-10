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
        int n;
        cin >> n;
        int a[n + 2], b[n + 2], c[n + 2];
        stack<int> st;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            while (st.size() && a[st.top()] >= a[i]) st.pop();
            if (st.size()) b[i] = st.top();
            else b[i] = 0;
            //cout << b[i] << " ";
            st.push(i);
        }
        st = {};
        //cout << "\n";
        for (int i = n; i; --i)
        {
            while (st.size() && a[st.top()] >= a[i]) st.pop();
            if (st.size()) c[i] = st.top();
            else c[i] = n + 1;
            //cout << c[i] << " ";
            st.push(i);
        }
        long long d = 0;
        //cout << "\n";
        for (int i = 1; i <= n; ++i)
        {
            //cout << b[i] << " " << c[i] << "\n";
            d = max((long long)a[i] * (c[i] - b[i] - 1), d);
        }
        cout << d << "\n";
    }
}
