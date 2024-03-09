#include<bits/stdc++.h>
using namespace std;
int d, s, a[10][10], k1[20], k2[20], k3[20];
void tt(int x)
{
    for (int i = 1; i <= 8; ++i)
    {
        if (!k1[i] && !k2[i + x - 1] && !k3[8 - x + i])
        {
            if (x == 8) d = max(s + a[8][i], d);
            else
            {
                k1[i] = k2[i + x - 1] = k3[8 - x + i] = 1;
                s += a[x][i];
                tt(x + 1);
                s -= a[x][i];
                k1[i] = k2[i + x - 1] = k3[8 - x + i] = 0;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        for (int i = 1; i <= 8; ++i)
        {
            for (int j = 1; j <= 8; ++j) cin >> a[i][j];
        }
        for (int i = 0; i < 20; ++i) k1[i] = k2[i] = k3[i] = 0;
        tt(1);
        cout << d << "\n";
        d = s = 0;
    }
}
