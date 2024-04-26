#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int v, e, q;
        cin >> v >> e;
        int a[v + 2][v + 2] = {};
        for (int i = 1; i <= v; ++i)
        {
            for (int j = 1; j <= v; ++j)
            {
                if (i != j) a[i][j] = 1e9;
            }
        }
        while (e--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            a[x][y] = a[y][x] = z;
        }
        for (int i = 1; i <= v; ++i)
        {
            for (int j = 1; j <= v; ++j)
            {
                for (int k = 1; k <= v; ++k)
                {
                    if (a[j][i] + a[i][k] < a[j][k]) a[j][k] = a[j][i] + a[i][k];
                }
            }
        }
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            cout << a[x][y] << "\n";
        }
    }
}
