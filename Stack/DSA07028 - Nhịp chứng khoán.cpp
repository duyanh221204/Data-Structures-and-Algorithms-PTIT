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
        int a[n + 2];
        stack<int> st;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            while (st.size() && a[st.top()] <= a[i]) st.pop();
            if (st.size()) cout << i - st.top();
            else cout << i;
            cout << " ";
            st.push(i);
        }
        cout << "\n";
    }
}
