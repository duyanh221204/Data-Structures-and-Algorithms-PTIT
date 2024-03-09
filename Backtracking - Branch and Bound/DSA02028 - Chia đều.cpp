#include<bits/stdc++.h>
using namespace std;
int n, k, d, s, dem, b[15];
void tt(int x)
{
    for (int i = x; i <= n; ++i)
    {
        if (b[i] - b[x - 1] == s)
        {
            ++dem;
            if (dem == k && i == n) ++d;
            else if (dem < k) tt(i + 1);
            --dem;
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
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            b[i] = b[i - 1] + x;
            s += x;
        }
        if (s % k) cout << "0";
        else
        {
            s /= k;
            tt(1);
            cout << d;
        }
    }
}
