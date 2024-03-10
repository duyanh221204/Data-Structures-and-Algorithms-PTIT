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
        int d = 0;
        stack<char> st;
        for (char& i : s)
        {
            if (!st.size() || i == 40) st.push(i);
            else if (st.top() == 40)
            {
                d += 2;
                st.pop();
            }
        }
        cout << d << "\n";
    }
}
