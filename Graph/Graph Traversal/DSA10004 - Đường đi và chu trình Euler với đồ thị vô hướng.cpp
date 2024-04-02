#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int v, e, d = 0;
        cin >> v >> e;
        int k[v + 2] = {};
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            ++k[x], ++k[y];
        }
        for (int i = 1; i <= v; ++i)
        {
            if (k[i] & 1) ++d;
        }
        if (!d) cout << "2\n";
        else if (d == 2) cout << "1\n";
        else cout << "0\n";
    }
}
