#include<bits/stdc++.h>
using namespace std;
struct mt
{
    int a[2][3];
};
int kt(mt& a, mt& b)
{
    for (int i = 0; i <= 1; ++i)
    {
        for (int j = 0; j <= 2; ++j)
        {
            if (a.a[i][j] != b.a[i][j]) return 0;
        }
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        mt a, b;
        for (int i = 0; i <= 1; ++i)
        {
            for (int j = 0; j <= 2; ++j) cin >> a.a[i][j];
        }
        for (int i = 0; i <= 1; ++i)
        {
            for (int j = 0; j <= 2; ++j) cin >> b.a[i][j];
        }
        queue<pair<mt, int>> q;
        q.push({a, 0});
        while (q.size())
        {
            pair<mt, int> p = q.front();
            q.pop();
            if (kt(p.first, b))
            {
                cout << p.second << "\n";
                break;
            }
            mt c = p.first;
            int x = c.a[0][0];
            c.a[0][0] = c.a[1][0];
            c.a[1][0] = c.a[1][1];
            c.a[1][1] = c.a[0][1];
            c.a[0][1] = x;
            q.push({c, p.second + 1});
            c = p.first;
            x = c.a[0][1];
            c.a[0][1] = c.a[1][1];
            c.a[1][1] = c.a[1][2];
            c.a[1][2] = c.a[0][2];
            c.a[0][2] = x;
            q.push({c, p.second + 1});
        }
    }
}
