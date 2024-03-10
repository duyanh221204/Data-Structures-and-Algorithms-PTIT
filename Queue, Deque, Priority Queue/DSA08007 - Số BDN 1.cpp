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
        long long n, d = 0;
        cin >> n;
        queue<long long> q;
        q.push(1);
        while (1)
        {
            long long x = q.front();
            q.pop();
            if (x <= n) ++d;
            else break;
            q.push(x * 10);
            q.push(x * 10 + 1);
        }
        cout << d << "\n";
    }
}
