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
        string s, k = "";
        cin >> s;
        stack<char> st1, st2;
        for (char& i : s)
        {
            if (i == 45)
            {
                if (st1.size()) st1.pop();
            }
            else if (i == 60)
            {
                if (st1.size())
                {
                    st2.push(st1.top());
                    //cout << st1.top() << "\n";
                    st1.pop();
                }
            }
            else if (i == 62)
            {
                if (st2.size())
                {
                    st1.push(st2.top());
                    //cout << st2.top() << "\n";
                    st2.pop();
                }
            }
            else st1.push(i);
        }
        while (st1.size())
        {
            k += st1.top();
            st1.pop();
        }
        reverse(k.begin(), k.end());
        while (st2.size())
        {
            k += st2.top();
            st2.pop();
        }
        //reverse(k.begin(), k.end());
        cout << k;
    }
}
