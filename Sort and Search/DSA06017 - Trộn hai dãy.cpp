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
        int n, m;
        cin >> n >> m;
        priority_queue<int, vector<int>, greater<>> pq;
        while (n--)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        while (m--)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        while (pq.size())
        {
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << "\n";
    }
}
