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
        int n, s = 0, d = 0;
        cin >> n;
        priority_queue<int> pq;
        priority_queue<int, vector<int>, greater<>> pq1, pq2;
        while (n--)
        {
            int x;
            cin >> x;
            if (x % 3 == 0) pq.push(x);
            else if (x % 3 == 1) pq1.push(x);
            else pq2.push(x);
            s += x;
        }
        if (!s) cout << "0";
        else if (s % 3 == 1)
        {
            if (pq1.size()) pq1.pop();
            else
            {
                if (pq2.size() > 1)
                {
                    pq2.pop();
                    pq2.pop();
                }
                else
                {
                    d = 1;
                    cout << "-1";
                }
            }
        }
        else if (s % 3 == 2)
        {
            if (pq2.size()) pq2.pop();
            else
            {
                if (pq1.size() > 1)
                {
                    pq1.pop();
                    pq1.pop();
                }
                else
                {
                    d = 1;
                    cout << "-1";
                }
            }
        }
        if (!d)
        {
            while (pq1.size())
            {
                pq.push(pq1.top());
                pq1.pop();
            }
            while (pq2.size())
            {
                pq.push(pq2.top());
                pq2.pop();
            }
            if (!pq.size()) cout << "-1";
            else
            {
                while (pq.size())
                {
                    cout << pq.top();
                    pq.pop();
                }
            }
        }
        cout << "\n";
    }
}
