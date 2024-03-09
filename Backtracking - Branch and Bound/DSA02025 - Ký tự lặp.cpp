#include<bits/stdc++.h>
using namespace std;
string s[12], k[12];
int n, dem, d = 2e9, h[12];
int kt(string& s1, string& s2)
{
    int x = 0, f[92] = {};
    for (char& i : s1) ++f[i];
    for (char& i : s2) ++f[i];
    for (int i = 65; i <= 90; ++i)
    {
        if (f[i] == 2) ++x;
    }
    return x;
}
void tt(int x)
{
    for (int i = 1; i <= n; ++i)
    {
        if (!h[i])
        {
            h[i] = 1;
            k[x] = s[i];
            int tmp = kt(k[x], k[x - 1]);
            dem += tmp;
            if (x == n) d = min(dem, d);
            else tt(x + 1);
            dem -= tmp;
            h[i] = 0;
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
        for (int i = 1; i <= n; ++i) cin >> s[i];
        s[0] = k[0] = "*";
        tt(1);
        cout << d;
    }
}
