#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string s;
        getline (cin, s);
        stack<char> st;
        int d = 0;
        for (char& i : s)
        {
            if (i == 41)
            {
                d = 1;
                char c = st.top();
                st.pop();
                //cout << c << "\n";
                while (st.size() && c != 40)
                {
                    if (c == 42 || c == 43 || c == 45 || c == 47)
                    {
                        d = 0;
                        //break;
                    }
                    c = st.top();
                    st.pop();
                    //cout << c << "\n";
                }
                if (d) break;
            }
            else st.push(i);
        }
        if (d) cout << "Yes\n";
        else cout << "No\n";
    }
}
