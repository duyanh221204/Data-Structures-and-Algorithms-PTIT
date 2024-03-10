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
        int d = 0, x = 0;
        stack<char> st;
        for (char& i : s)
        {
            if (!st.size()) st.push(i);
            else if (st.top() == 91 && i == 93)
            {
                x += 2;
                st.pop();
            }
            else if (st.top() == 93 && i == 91)
            {
                d += (x + st.size());
                st.pop();
            }
            else if (i == 91 || (st.top() == 93 && i == 93)) st.push(i);
            if (!st.size()) x = 0;
        }
        cout << d << "\n";
    }
}
