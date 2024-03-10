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
        int a[n], b[n], c[n];
        for (int& i : a) cin >> i;
        stack<int> st;
        for (int i = n - 1; ~i; --i)
        {
            while (st.size() && a[st.top()] >= a[i]) st.pop();
            if (st.size()) b[i] = st.top();
            else b[i] = -1;
            st.push(i);
        }
        st = {};
        for (int i = n - 1; ~i; --i)
        {
            while (st.size() && a[st.top()] <= a[i]) st.pop();
            if (st.size()) c[i] = st.top();
            else c[i] = -1;
            st.push(i);
        }
        for (int i = 0; i < n; ++i)
        {
            if (c[i] > -1 && b[c[i]] > -1) cout << a[b[c[i]]];
            else cout << "-1";
            cout << " ";
        }
        cout << "\n";
    }
}
