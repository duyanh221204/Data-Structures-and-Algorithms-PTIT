#include<bits/stdc++.h>
using namespace std;
int tt(char c)
{
    if (c == 43 || c == 45) return 1;
    if (c == 42 || c == 47) return 2;
    if (c == 94) return 3;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        string s, k = "";
        cin >> s;
        stack<char> st;
        for (char& i : s)
        {
            if (i == 40)
            {
                //cout << st.top() << "\n";
                st.push(i);
            }
            else if (i == 41)
            {
                while (st.size() && st.top() != 40)
                {
                    k += st.top();
                    st.pop();
                }
                //cout << st.top() << "\n";
                if (st.size()) st.pop();
            }
            else if (i == 42 || i == 43 || i == 45 || i == 47 || i == 94)
            {
                //cout << st.top() << "\n";
                while (st.size() && tt(st.top()) >= tt(i))
                {
                    k += st.top();
                    st.pop();
                }
                //cout << st.top() << "\n";
                st.push(i);
            }
            else k += i;
        }
        while (st.size())
        {
            if (st.top() != 40) k += st.top();
            st.pop();
        }
        cout << k << "\n";
    }
}
