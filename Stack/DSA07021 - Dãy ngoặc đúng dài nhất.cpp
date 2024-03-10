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
        int d = 0, x = s.size();
        stack<int> st;
        st.push(-1);
        for (int i = 0; i < x; ++i)
        {
            if (s[i] == 40) st.push(i);
            else
            {
                st.pop();
                if (st.size()) d = max(i - st.top(), d);
                else st.push(i);
            }
        }
        cout << d << "\n";
    }
}
