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
        int m, n;
        cin >> m >> n;
        int p[m], q[n], r[m + n] = {};
        for (int& i : p) cin >> i;
        for (int& i : q) cin >> i;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j) r[i + j] += (p[i] * q[j]);
        }
        for (int i = 0; i < m + n - 1; ++i) cout << r[i] << " ";
        cout << "\n";
    }
}
