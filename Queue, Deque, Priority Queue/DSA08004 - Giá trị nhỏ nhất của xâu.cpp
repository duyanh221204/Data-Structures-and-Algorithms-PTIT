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
        int k, f[26] = {};
        string s;
        cin >> k >> s;
        for (char& i : s) ++f[i - 65];
        priority_queue<int> pq;
        for (int& i : f)
        {
            if (i) pq.push(i);
        }
        while (pq.size() && k)
        {
            int x = pq.top();
            pq.pop();
            if (!x) break;
            pq.push(x - 1);
            --k;
        }
        long long d = 0;
        while (pq.size())
        {
            d += ((long long)pq.top() * pq.top());
            pq.pop();
        }
        cout << d << "\n";
    }
}
