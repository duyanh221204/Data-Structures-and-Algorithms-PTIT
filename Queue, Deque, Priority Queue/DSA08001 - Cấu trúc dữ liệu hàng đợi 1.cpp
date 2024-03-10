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
        int n;
        cin >> n;
        deque<int> dq;
        while (n--)
        {
            int x;
            cin >> x;
            if (x == 1) cout << dq.size() << "\n";
            else if (x == 2)
            {
                if (!dq.size()) cout << "YES\n";
                else cout << "NO\n";
            }
            else if (x == 3)
            {
                int y;
                cin >> y;
                dq.push_front(y);
            }
            else if (x == 4)
            {
                if (dq.size()) dq.pop_back();
            }
            else if (x == 5)
            {
                if (dq.size()) cout << dq.back() << "\n";
                else cout << "-1\n";
            }
            else
            {
                if (dq.size()) cout << dq.front() << "\n";
                else cout << "-1\n";
            }
        }
    }
}
