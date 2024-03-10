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
        for (char& i : s)
        {
            if (i == 42 || i == 43 || i == 45 || i == 47)
            {
                string s1 = st.top();
                st.pop();
                string s2 = st.top();
                st.pop();
                st.push("(" + s2 + i + s1 + ")");
            }
            else st.push(string(1, i));
        }
        cout << st.top() << "\n";
    }
}
