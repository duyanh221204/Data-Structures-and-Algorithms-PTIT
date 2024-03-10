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
            if (s[i] == 42 || s[i] == 43 || s[i] == 45 || s[i] == 47)
            {
                string k1 = st.top();
                st.pop();
                string k2 = st.top();
                st.pop();
                st.push("(" + k1 + s[i] + k2 + ")");
            }
            else st.push(string(1, s[i]));
        }
        cout << st.top() << "\n";
    }
}
