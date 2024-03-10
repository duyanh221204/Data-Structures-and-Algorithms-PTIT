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
        stack<string> st;
        for (int i = s.size() - 1; ~i; --i)
        {
            if (s[i] == 91)
            {
                string k = "";
                while (st.size() && st.top() != "]")
                {
                    k += st.top();
                    st.pop();
                }
                //cout << k << "\n";
                if (st.size()) st.pop();
                st.push(k);
            }
            else if (isdigit(s[i]))
            {
                string k = "", h = "";
                while (~i && isdigit(s[i])) k += s[i--];
                ++i;
                //cout << k << "\n";
                reverse(k.begin(), k.end());
                long long d = stoll(k);
                k = st.top();
                //cout << k << "\n";
                st.pop();
                while (d--) h += k;
                //cout << h << "\n";
                st.push(h);
            }
            else st.push(string(1, s[i]));
        }
        while (st.size())
        {
            cout << st.top();
            st.pop();
        }
        cout << "\n";
    }
}
