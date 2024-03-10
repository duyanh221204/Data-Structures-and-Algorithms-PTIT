#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
string tt(string& s)
{
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
    string k = "";
    for (char& i : s)
    {
        if (i > 41) k += i;
    }
    return k;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        //cout << s1 << "\n";
        if (tt(s1) == tt(s2)) cout << "YES\n";
        else cout << "NO\n";
    }
}
