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
        long long s = 0;
        priority_queue<long long, vector<long long>, greater<>> pq;
        while (n--)
        {
            long long x;
            cin >> x;
            pq.push(x);
        }
        while (pq.size() > 1)
        {
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            long long c = a + b;
            pq.push(c);
            s += c;
        }
        cout << s << "\n";
    }
}
