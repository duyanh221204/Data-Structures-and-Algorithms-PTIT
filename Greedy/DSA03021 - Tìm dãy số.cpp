#include<bits/stdc++.h>
using namespace std;
int n, a[1002];
int kt(int x)
{
    for (int i = 1; i <= n; ++i)
    {
        int y = a[i] / x;
        if (x != a[i] / y) return 0;
    }
    return 1;
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
        int s = 0, d = 2e9;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            d = min(a[i], d);
        }
        for (int i = d; i; --i)
        {
            if (kt(i))
            {
                for (int j = 1; j <= n; ++j)
                {
                    int x = a[j] / i;
                    while (x && a[j] / (x - 1) == i) --x;
                    s += x;
                }
                cout << s;
                break;
            }
        }
    }
}
