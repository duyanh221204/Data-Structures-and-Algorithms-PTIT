#include<bits/stdc++.h>
using namespace std;
int n, k, a[100];
string c = "BA";
vector<string> v;
int kt()
{
    int d = -2e9, dem = 0, f[100] = {};
    for (int i = 1; i <= n; ++i)
    {
        if (a[i]) f[i] = f[i - 1] + 1;
        //cout << f[i] << "\n";
        d = max(f[i], d);
    }
    //cout << d << "\n";
    if (d != k) return 0;
    for (int i = 1; i <= n; ++i)
    {
        if (f[i] == d) ++dem;
        if (dem > 1) return 0;
    }
    return 1;
}
void tt(int x)
{
    for (int i = 0; i <= 1; ++i)
    {
        a[x] = i;
        if (x == n)
        {
            if (kt())
            {
                string s = "";
                for (int j = 1; j <= n; ++j) s += c[a[j]];
                //cout << s << "\n";
                v.push_back(s);
            }
        }
        else tt(x + 1);
        //a[x] = 0;
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
        tt(1);
        cout << v.size() << "\n";
        for (int i = v.size() - 1; ~i; --i) cout << v[i] << "\n";
    }
}
