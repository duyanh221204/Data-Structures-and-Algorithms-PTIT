#include<bits/stdc++.h>
using namespace std;
int n, a[20], b[2] = {6, 8};
int kt()
{
    int d1 = 0, d2 = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] == 6)
        {
            ++d1;
            d2 = 0;
        }
        else
        {
            ++d2;
            d1 = 0;
        }
        if (d1 > 3 || d2 > 1) return 0;
    }
    return 1;
}
void tt(int x)
{
    for (int i = 0; i <= 1; ++i)
    {
        a[x] = b[i];
        if (x == n - 1)
        {
            if (kt())
            {
                for (int j = 1; j <= n; ++j) cout << a[j];
                cout << "\n";
            }
        }
        else tt(x + 1);
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
        a[1] = 8;
        a[n] = 6;
        tt(2);
    }
}
