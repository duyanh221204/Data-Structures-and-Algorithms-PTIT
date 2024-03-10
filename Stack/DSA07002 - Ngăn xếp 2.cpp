#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int q;
        cin >> q;
        stack<int> st;
        while (q--)
        {
            string s;
            cin >> s;
            if (s == "PUSH")
            {
                int x;
                cin >> x;
                st.push(x);
            }
            else if (s == "PRINT")
            {
                if (st.empty()) cout << "NONE\n";
                else cout << st.top() << "\n";
            }
            else
            {
                if (st.size()) st.pop();
            }
        }
    }
}
