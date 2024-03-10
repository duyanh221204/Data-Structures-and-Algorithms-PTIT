#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    vector<string> v;
    for (int i = 1; i <= 10000; ++i)
    {
        int x = i;
        stack<int> st;
        while (x)
        {
            st.push(x & 1);
            x >>= 1;
        }
        string s = "";
        while (st.size())
        {
            s += (st.top() + 48);
            st.pop();
        }
        v.push_back(s);
    }
    while (T--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) cout << v[i] << " ";
        cout << "\n";
    }
}
