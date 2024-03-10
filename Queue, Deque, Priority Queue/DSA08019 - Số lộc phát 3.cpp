#include<bits/stdc++.h>
using namespace std;
int tt(long long n)
{
    int d = 0;
    while (n)
    {
        ++d;
        n /= 10;
    }
    return d;
}
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
        vector<long long> v;
        queue<long long> q;
        q.push(6);
        q.push(8);
        while (tt(q.front()) <= n)
        {
            long long x = q.front();
            q.pop();
            v.push_back(x);
            q.push(x * 10 + 6);
            q.push(x * 10 + 8);
        }
        cout << v.size() << "\n";
        for (int i = v.size() - 1; ~i; --i) cout << v[i] << " ";
        cout << "\n";
    }
}
