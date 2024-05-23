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
        int n, x, y, u, v;
        cin >> n;
        int k[n + 2][n + 2] = {};
        char c[n + 2][n + 2];
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j) cin >> c[i][j];
        }
        cin >> x >> y >> u >> v;
        queue<pair<pair<int, int>, int>> q;
        ++x, ++y, ++u, ++v;
        q.push({{x, y}, 0});
        k[x][y] = 1;
        while (q.size())
        {
            pair<pair<int, int>, int> p = q.front();
            q.pop();
            //cout << p.first.first << " " << p.first.second << " " << p.second << "\n";
            if (p.first.first == u && p.first.second == v)
            {
                cout << p.second << "\n";
                break;
            }
            for (int i = p.first.second + 1; i <= n; ++i)
            {
                if (!k[p.first.first][i] && c[p.first.first][i] == 46)
                {
                    k[p.first.first][i] = 1;
                    q.push({{p.first.first, i}, p.second + 1});
                }
                else break;
            }
            for (int i = p.first.first - 1; i; --i)
            {
                if (!k[i][p.first.second] && c[i][p.first.second] == 46)
                {
                    k[i][p.first.second] = 1;
                    q.push({{i, p.first.second}, p.second + 1});
                }
                else break;
            }
            for (int i = p.first.first + 1; i <= n; ++i)
            {
                if (!k[i][p.first.second] && c[i][p.first.second] == 46)
                {
                    k[i][p.first.second] = 1;
                    q.push({{i, p.first.second}, p.second + 1});
                }
                else break;
            }
            for (int i = p.first.second - 1; i; --i)
            {
                if (!k[p.first.first][i] && c[p.first.first][i] == 46)
                {
                    k[p.first.first][i] = 1;
                    q.push({{p.first.first, i}, p.second + 1});
                }
                else break;
            }
        }
    }
}
