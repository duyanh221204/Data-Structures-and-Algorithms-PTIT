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
        string s;
        cin >> s;
        stack<int> st;
        int x = s.size();
        for (int i = 0; i < x; ++i)
        {
            st.push(i + 1);
            if (s[i] == 73)
            {
                while (st.size())
                {
                    cout << st.top();
                    st.pop();
                }
            }
        }
        st.push(x + 1);
        while (st.size())
        {
            cout << st.top();
            st.pop();
        }
        cout << "\n";
    }
}
