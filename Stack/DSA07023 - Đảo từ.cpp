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
        stack<string> st;
        stringstream ss(s);
        while (ss >> s) st.push(s);
        while (st.size())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << "\n";
    }
}
