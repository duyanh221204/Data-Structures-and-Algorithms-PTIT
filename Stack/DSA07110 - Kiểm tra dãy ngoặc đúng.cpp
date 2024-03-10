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
        stack<char> st;
        int d = 0;
        for (char& i : s)
        {
            if (i == 40 || i == 91 || i == 123) st.push(i);
            else if (i == 41)
            {
                if (!st.size()) d = 1;
                else if (st.top() == 40) st.pop();
            }
            else if (i == 93)
            {
                if (!st.size()) d = 1;
                else if (st.top() == 91) st.pop();
            }
            else
            {
                if (!st.size()) d = 1;
                else if (st.top() == 123) st.pop();
            }
            if (d) break;
        }
        if (d || st.size()) cout << "NO\n";
        else cout << "YES\n";
    }
}
