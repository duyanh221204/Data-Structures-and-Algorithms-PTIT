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
        int d1 = 0, d2 = 0;
        stack<char> st;
        for (char& i : s)
        {
            if (i == 40 || (i == 41 && !st.size())) st.push(i);
            else if (i == 41)
            {
                if (st.size() && st.top() == 40) st.pop();
                else st.push(i);
            }
        }
        while (st.size())
        {
            if (st.top() == 40) ++d1;
            else ++d2;
            st.pop();
        }
        cout << (d1 >> 1) + (d2 >> 1) + (d1 & 1) + (d2 & 1) << "\n";
    }
}
