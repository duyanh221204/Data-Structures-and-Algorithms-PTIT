#include<bits/stdc++.h>
using namespace std;
void tt(string& s)
{
    stack<string> st;
    for (int i = s.size() - 1; ~i; --i)
    {
        if (s[i] == 42 || s[i] == 43 || s[i] == 45 || s[i] == 47)
        {
            string k1 = st.top();
            st.pop();
            string k2 = st.top();
            st.pop();
            st.push(k1 + k2 + s[i]);
        }
        else st.push(string(1, s[i]));
    }
    s = st.top();
}
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
        tt(s);
        stack<long long> st;
        for (char& i : s)
        {
            if (i == 42 || i == 43 || i == 45 || i == 47)
            {
                long long x = st.top();
                st.pop();
                long long y = st.top();
                st.pop();
                if (i == 42) st.push(y * x);
                else if (i == 43) st.push(y + x);
                else if (i == 45) st.push(y - x);
                else st.push(y / x);
            }
            else st.push(i - 48);
        }
        cout << st.top() << "\n";
    }
}
