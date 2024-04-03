#include<bits/stdc++.h>
using namespace std;
int n, k[18] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61};
long long d = 1e18;
void tt(int x, long long u, long long s)
{
    if (u > n || x >= 18) return;
    if (u == n)
    {
        d = min(s, d);
        return;
    }
    for (int i = 1; ; ++i)
    {
        if (s * k[x] > d) break;
        s *= k[x];
        tt(x + 1, u * (i + 1), s);
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
        tt(0, 1, 1);
        cout << d << "\n";
        d = 1e18;
    }
}
