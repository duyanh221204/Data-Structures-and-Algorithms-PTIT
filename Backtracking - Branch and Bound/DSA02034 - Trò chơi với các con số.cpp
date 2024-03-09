#include<bits/stdc++.h>
using namespace std;
int n, a[12], k[12];
int kt()
{
    for (int i = 2; i <= n; ++i)
    {
        if (abs(a[i] - a[i - 1]) <= 1) return 0;
    }
    return 1;
}
void tt(int x)
{
    for (int i = 1; i <= n; ++i)
    {
        if (!k[i])
        {
            k[i] = 1;
            a[x] = i;
            if (x == n)
            {
                if (kt())
                {
                    for (int j = 1; j <= n; ++j) cout << a[j];
                    cout << "\n";
                }
            }
            else tt(x + 1);
            k[i] = 0;
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
        for (int i = 0; i < 12; ++i) a[i] = k[i] = 0;
        tt(1);
    }
}
