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
        int a[n];
        for (int& i : a) cin >> i;
        stack<int> st;
        vector<int> v;
        for (int i = n - 1; ~i; --i)
        {
            while (st.size() && a[i] >= a[st.top()]) st.pop();
            if (st.size()) v.push_back(a[st.top()]);
            else v.push_back(-1);
            st.push(i);
        }
        for (int i = v.size() - 1; ~i; --i) cout << v[i] << " ";
        cout << "\n";
    }
}
