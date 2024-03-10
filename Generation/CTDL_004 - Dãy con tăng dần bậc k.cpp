#include<bits/stdc++.h>
using namespace std;
int n, k, d, dem, a[102];
void tt(int x)
{
    for (int i = x + 1; i <= n; ++i)
    {
        if (a[x] < a[i])
        {
            ++d;
            if (d == k) ++dem;
            tt(i);
            --d;
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
        cin >> n >> k;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        tt(0);
        cout << dem;
    }
}
