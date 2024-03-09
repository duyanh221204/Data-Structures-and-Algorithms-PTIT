#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    int x2 = 1, x3 = 1, x5 = 1, f[10002] = {};
    f[1] = 1;
    for (int i = 2; i <= 10000; ++i)
    {
        f[i] = min({f[x2] * 2, f[x3] * 3, f[x5] * 5});
        if (f[i] == f[x2] * 2) ++x2;
        if (f[i] == f[x3] * 3) ++x3;
        if (f[i] == f[x5] * 5) ++x5;
    }
    while (T--)
    {
        int n;
        cin >> n;
        cout << f[n] << "\n";
    }
}
