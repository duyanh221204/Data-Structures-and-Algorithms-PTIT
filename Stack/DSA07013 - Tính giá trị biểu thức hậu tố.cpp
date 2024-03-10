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
