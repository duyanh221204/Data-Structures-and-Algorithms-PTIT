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
        long long n;
        cin >> n;
        queue<long long> q;
        q.push(1);
        while (q.front() % n)
        {
            long long x = q.front();
            q.pop();
            q.push(x * 10);
            q.push(x * 10 + 1);
        }
        cout << q.front() << "\n";
    }
}
