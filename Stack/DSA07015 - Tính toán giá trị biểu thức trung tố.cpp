#include<bits/stdc++.h>
using namespace std;
int kt(char c)
{
    if (c == 43 || c == 45) return 1;
    if (c == 42 || c == 47) return 2;
    return 0;
}
string tt(string& s)
{
    string k = "";
    stack<char> st;
    for (char& i : s)
    {
        if (i == 40) st.push(i);
        else if (i == 41)
        {
            while (st.size() && st.top() != 40)
            {
                k += st.top();
                st.pop();
            }
            if (st.size()) st.pop();
        }
        else if (i == 42 || i == 43 || i == 45 || i == 47)
        {
            if (isdigit(k.back())) k += 65;
            while (st.size() && kt(st.top()) >= kt(i))
            {
                k += st.top();
                st.pop();
            }
            st.push(i);
        }
        else k += i;
    }
    //cout << k << "\n";
    while (st.size())
    {
        if (st.top() != 40) k += st.top();
        st.pop();
    }
    return k;
}
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
        s = tt(s);
        //cout << s << "\n";
        stack<long long> st;
        int x = s.size();
        for (int i = 0; i < x; ++i)
        {
            if (isdigit(s[i]))
            {
                long long d = 0;
                while (i < x && isdigit(s[i])) (d *= 10) += (s[i++] - 48);
                //cout << s[i] << "\n";
                if (s[i] != 65) --i;
                st.push(d);
            }
            else
            {
                long long a = st.top();
                st.pop();
                long long b = st.top();
                st.pop();
                //cout << a << " " << b << "\n";
                if (s[i] == 42) st.push(b * a);
                else if (s[i] == 43) st.push(b + a);
                else if (s[i] == 45) st.push(b - a);
                else st.push(b / a);
            }
        }
        cout << st.top() << "\n";
    }
}
