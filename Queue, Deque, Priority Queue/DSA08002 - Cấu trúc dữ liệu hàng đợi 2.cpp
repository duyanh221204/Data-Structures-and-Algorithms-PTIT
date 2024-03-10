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
        int n;
        cin >> n;
        queue<int> q;
        while (n--)
        {
            string s;
            cin >> s;
            if (s == "PUSH")
            {
                int x;
                cin >> x;
                q.push(x);
            }
            else if (s == "PRINTFRONT")
            {
                if (!q.size()) cout << "NONE\n";
                else cout << q.front() << "\n";
            }
            else
            {
                if (q.size()) q.pop();
            }
        }
    }
}
