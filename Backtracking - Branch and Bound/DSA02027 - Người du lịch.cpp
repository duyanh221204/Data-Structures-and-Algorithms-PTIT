#include<bits/stdc++.h>
using namespace std;
int n, s, d = 2e9, k[17], a[17][17];
void tt(int x)
{
    for (int i = 2; i <= n; ++i)
    {
        if (!k[i] && s + a[x][i] < d)
        {
            k[i] = 1;
            s += a[x][i];
            int h = 0;
            for (int j = 1; j <= n; ++j)
            {
                if (!k[j])
                {
                    h = 1;
                    break;
                }
            }
            if (!h) d = min(s + a[i][1], d);
            else tt(i);
            s -= a[x][i];
            k[i] = 0;
        }
    }
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
            for (int j = 1; j <= n; ++j) cin >> a[i][j];
        }
        if (n == 1) cout << "0";
        else
        {
            k[1] = 1;
            tt(1);
            cout << d;
        }
    }
}
