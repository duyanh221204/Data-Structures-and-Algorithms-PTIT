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
        int m, n, d = 0;
        cin >> m >> n;
        int a[m + 2][n + 2] = {}, k[m + 2][n + 2] = {};
        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j) cin >> a[i][j];
        }
        queue<pair<pair<int, int>, int>> q;
        q.push({{1, 1}, 0});
        k[1][1] = 1;
        while (q.size())
        {
            pair<pair<int, int>, int> p = q.front();
            q.pop();
            if (p.first.first == m && p.first.second == n)
            {
                d = 1;
                cout << p.second << "\n";
                break;
            }
            if (p.first.first <= m && p.first.second <= n && p.first.second + a[p.first.first][p.first.second] <= n && !k[p.first.first][p.first.second + a[p.first.first][p.first.second]])
            {
                k[p.first.first][p.first.second + a[p.first.first][p.first.second]] = 1;
                q.push({{p.first.first, p.first.second + a[p.first.first][p.first.second]}, p.second + 1});
            }
            if (p.first.first <= m && p.first.first + a[p.first.first][p.first.second] <= m && p.first.second <= n && !k[p.first.first + a[p.first.first][p.first.second]][p.first.second])
            {
                k[p.first.first + a[p.first.first][p.first.second]][p.first.second] = 1;
                q.push({{p.first.first + a[p.first.first][p.first.second], p.first.second}, p.second + 1});
            }
        }
        if (!d) cout << "-1\n";
    }
}
