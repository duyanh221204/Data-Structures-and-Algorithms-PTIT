#include<bits/stdc++.h>
using namespace std;
int n;
long long m, a[100002], t[1000002];
void update(long long x)
{
    while (x <= m)
    {
        ++t[x];
        x += (x & -x);
    }
}
long long tt(long long x)
{
    long long d = 0;
    while (x >= 1)
    {
        d += t[x];
        x -= (x & -x);
    }
    return d;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            m = max(a[i], m);
        }
        queue<long long> q;
        long long d = 0;
        for (int i = n; i; --i)
        {
            if (a[i] & 1)
            {
                while (q.size())
                {
                    update(q.front());
                    q.pop();
                }
            }
            else
            {
                d += tt(a[i] - 1);
                q.push(a[i]);
            }
        }
        cout << d;
    }
}
