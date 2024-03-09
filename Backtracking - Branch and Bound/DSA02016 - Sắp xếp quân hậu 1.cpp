#include<bits/stdc++.h>
using namespace std;
int n, d, k1[20], k2[20], k3[20];
void tt(int x)
{
    for (int i = 1; i <= n; ++i)
    {
        if (!k1[i] && !k2[i + x - 1] && !k3[n - x + i])
        {
            if (x == n) ++d;
            else
            {
                k1[i] = k2[i + x - 1] = k3[n - x + i] = 1;
                tt(x + 1);
                k1[i] = k2[i + x - 1] = k3[n - x + i] = 0;
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
        cin >> n;
        tt(1);
        cout << d << "\n";
        d = 0;
        for (int i = 0; i < 20; ++i) k1[i] = k2[i] = k3[i] = 0;
    }
}
