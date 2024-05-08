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
        int n, d = 0;
        cin >> n;
        int a[n + 2], l[n + 2] = {}, r[n + 2] = {};
        stack<int> st;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            while (st.size() && a[i] <= a[st.top()]) st.pop();
            if (st.size()) l[i] = st.top();
            else l[i] = 0;
            st.push(i);
        }
        st = {};
        for (int i = n; i; --i)
        {
            while (st.size() && a[i] <= a[st.top()]) st.pop();
            if (st.size()) r[i] = st.top();
            else r[i] = n + 1;
            st.push(i);
        }
        for (int i = 1; i <= n; ++i)
        {
            if (r[i] - l[i] - 1 >= a[i]) d = max(a[i], d);
        }
        cout << d << "\n";
    }
}
