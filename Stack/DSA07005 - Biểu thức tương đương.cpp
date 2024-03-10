#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
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
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 40) st.push(i);
            else if (s[i] == 41)
            {
                if (st.size())
                {
                    int m = st.top();
                    st.pop();
                    if (m && s[m - 1] == 45)
                    {
                        for (int j = m; j <= i; ++j)
                        {
                            if (s[j] == 43) s[j] = 45;
                            else if (s[j] == 45) s[j] = 43;
                        }
                    }
                }
            }
        }
        for (char& i : s)
        {
            if (i > 41) cout << i;
        }
        cout << "\n";
    }
}
