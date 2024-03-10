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
        deque<int> dq;
        while (q--)
        {
            string s;
            cin >> s;
            if (s == "PUSHFRONT")
            {
                int x;
                cin >> x;
                dq.push_front(x);
            }
            else if (s == "PRINTFRONT")
            {
                if (dq.size()) cout << dq.front() << "\n";
                else cout << "NONE\n";
            }
            else if (s == "POPFRONT")
            {
                if (dq.size()) dq.pop_front();
            }
            else if (s == "PUSHBACK")
            {
                int x;
                cin >> x;
                dq.push_back(x);
            }
            else if (s == "PRINTBACK")
            {
                if (dq.size()) cout << dq.back() << "\n";
                else cout << "NONE\n";
            }
            else
            {
                if (dq.size()) dq.pop_back();
            }
        }
    }
}
