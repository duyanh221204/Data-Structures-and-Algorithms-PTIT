#include<bits/stdc++.h>
using namespace std;
int k[5];
long long tt(int y[], int m, int x)
{
    if (!x) return 0;
    if (x == 1) return k[0];
    long long d = y + m - upper_bound(y, y + m, x) + k[0] + k[1];
    if (x == 2) return d - k[3] - k[4];
    return d + (k[2] * (x == 3));
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        int x[n], y[m];
        fill(k, k + 5, 0);
        for (int& i : x) cin >> i;
        for (int& i : y)
        {
            cin >> i;
            if (i < 5) ++k[i];
        }
        sort(y, y + m);
        long long d = 0;
        for (int& i : x) d += tt(y, m, i);
        cout << d << "\n";
    }
}
