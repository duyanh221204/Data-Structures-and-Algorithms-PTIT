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
        string s;
        stack<int> st;
        while (cin >> s)
        {
            //if (s == "0") break;
            if (s == "push")
            {
                int x;
                cin >> x;
                st.push(x);
            }
            else if (s == "pop")
            {
                if (st.size()) st.pop();
            }
            else
            {
                if (st.empty()) cout << "empty\n";
                else
                {
                    stack<int> st1;
                    while (st.size())
                    {
                        st1.push(st.top());
                        st.pop();
                    }
                    while (st1.size())
                    {
                        cout << st1.top() << " ";
                        st.push(st1.top());
                        st1.pop();
                    }
                    cout << "\n";
                }
            }
        }
    }
}
