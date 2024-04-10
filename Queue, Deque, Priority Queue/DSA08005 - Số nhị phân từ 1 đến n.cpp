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
        queue<long long> q;
        q.push(1);
        while (n--)
        {
            long long m = q.front();
            q.pop();
            cout << m << " ";
            q.push(m * 10);
            q.push(m * 10 + 1);
        }
        cout << "\n";
    }
}
